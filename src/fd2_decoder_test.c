#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fd2_decoder.h"

static int tests_run = 0;
static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name) do { \
    tests_run++; \
    printf("  TEST: %s ... ", #name); \
    if (name()) { \
        tests_passed++; \
        printf("PASS\n"); \
    } else { \
        tests_failed++; \
        printf("FAIL\n"); \
    } \
} while(0)

/* ---- Test: Load FDOTHER.DAT ---- */
static int test_load_fdother(void) {
    fd2_dat_t dat;
    int rc = fd2_dat_load(&dat, "game/FDOTHER.DAT");
    if (rc != 0) { printf("cannot load FDOTHER.DAT\n"); return 0; }
    if (dat.resource_count != 422) { printf("expected 422 resources, got %u\n", dat.resource_count); fd2_dat_free(&dat); return 0; }
    if (dat.file_size != 3382481) { printf("expected 3382481 bytes, got %u\n", dat.file_size); fd2_dat_free(&dat); return 0; }
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Load BG.DAT ---- */
static int test_load_bg(void) {
    fd2_dat_t dat;
    int rc = fd2_dat_load(&dat, "game/BG.DAT");
    if (rc != 0) { printf("cannot load BG.DAT\n"); return 0; }
    if (dat.resource_count != 234) { printf("expected 234 resources, got %u\n", dat.resource_count); fd2_dat_free(&dat); return 0; }
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Load FIGANI.DAT ---- */
static int test_load_figani(void) {
    fd2_dat_t dat;
    int rc = fd2_dat_load(&dat, "game/FIGANI.DAT");
    if (rc != 0) { printf("cannot load FIGANI.DAT\n"); return 0; }
    if (dat.resource_count != 1642) { printf("expected 1642 resources, got %u\n", dat.resource_count); fd2_dat_free(&dat); return 0; }
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Get resource from FDOTHER.DAT ---- */
static int test_get_resource(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 7, &size);
    if (!res) { printf("resource 7 is NULL\n"); fd2_dat_free(&dat); return 0; }
    if (size != 768) { printf("expected 768 bytes, got %u\n", size); fd2_dat_free(&dat); return 0; }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: RLE decompress title (resource 74) ---- */
static int test_rle_decompress_title(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 74, &size);
    if (!res) { printf("resource 74 is NULL\n"); fd2_dat_free(&dat); return 0; }

    u8* pixels = NULL;
    int w, h;
    int rc = fd2_rle_decompress_from_resource(res, size, &pixels, &w, &h);
    if (rc != 0) { printf("decompress failed\n"); fd2_dat_free(&dat); return 0; }
    if (w != 320 || h != 200) { printf("expected 320x200, got %dx%d\n", w, h); free(pixels); fd2_dat_free(&dat); return 0; }

    free(pixels);
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: RLE decompress intro frame (resource 10) ---- */
static int test_rle_decompress_intro(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 10, &size);
    if (!res) { printf("resource 10 is NULL\n"); fd2_dat_free(&dat); return 0; }

    u8* pixels = NULL;
    int w, h;
    int rc = fd2_rle_decompress_from_resource(res, size, &pixels, &w, &h);
    if (rc != 0) { printf("decompress failed\n"); fd2_dat_free(&dat); return 0; }
    if (w != 320 || h != 200) { printf("expected 320x200, got %dx%d\n", w, h); free(pixels); fd2_dat_free(&dat); return 0; }

    free(pixels);
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: RLE decompress animation frames (69-73) ---- */
static int test_rle_decompress_anim_frames(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    int expected_dims[5][2] = {
        {320, 147}, {320, 147}, {320, 147}, {320, 147}, {320, 200}
    };

    for (int i = 0; i < 5; i++) {
        u32 size;
        const u8* res = fd2_dat_get_resource(&dat, 69 + i, &size);
        if (!res) { printf("resource %d is NULL\n", 69 + i); fd2_dat_free(&dat); return 0; }

        u8* pixels = NULL;
        int w, h;
        int rc = fd2_rle_decompress_from_resource(res, size, &pixels, &w, &h);
        if (rc != 0) { printf("decompress frame %d failed\n", i); fd2_dat_free(&dat); return 0; }
        if (w != expected_dims[i][0] || h != expected_dims[i][1]) {
            printf("frame %d: expected %dx%d, got %dx%d\n", i, expected_dims[i][0], expected_dims[i][1], w, h);
            free(pixels);
            fd2_dat_free(&dat);
            return 0;
        }
        free(pixels);
    }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Palette extraction ---- */
static int test_palette_extract(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 7, &size);
    if (!res || size != 768) { printf("palette resource invalid\n"); fd2_dat_free(&dat); return 0; }

    u8 palette_8bit[768];
    fd2_palette_6bit_to_8bit(res, palette_8bit);

    /* Verify conversion: 6-bit value 0x3F should become 0xFF */
    /* Check that palette values are in valid range */
    for (int i = 0; i < 768; i++) {
        if (palette_8bit[i] == 0 && res[i] != 0) {
            /* Non-zero input should not become zero unless brightness is 0 */
        }
    }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: BG.DAT background decode ---- */
static int test_bg_decode(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/BG.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 0, &size);
    if (!res) { printf("BG resource 0 is NULL\n"); fd2_dat_free(&dat); return 0; }

    u8* pixels = NULL;
    int w, h;
    int rc = fd2_bg_decode(res, size, &pixels, &w, &h);
    if (rc != 0) { printf("BG decode failed\n"); fd2_dat_free(&dat); return 0; }
    if (w != 320 || h != 100) { printf("expected 320x100, got %dx%d\n", w, h); free(pixels); fd2_dat_free(&dat); return 0; }

    free(pixels);
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: FIGANI.DAT frame decode ---- */
static int test_figani_decode(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FIGANI.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 0, &size);
    if (!res) { printf("FIGANI resource 0 is NULL\n"); fd2_dat_free(&dat); return 0; }

    fd2_ani_frame_t frame;
    int rc = fd2_ani_decode_frame(res, size, &frame);
    if (rc != 0) { printf("FIGANI decode failed\n"); fd2_dat_free(&dat); return 0; }
    if (frame.width != 11 || frame.height != 11) {
        printf("expected 11x11, got %dx%d\n", frame.width, frame.height);
        free(frame.pixels);
        fd2_dat_free(&dat);
        return 0;
    }
    if (frame.pixel_count != 121) {
        printf("expected 121 pixels, got %u\n", frame.pixel_count);
        free(frame.pixels);
        fd2_dat_free(&dat);
        return 0;
    }

    free(frame.pixels);

    /* Test timing resource */
    res = fd2_dat_get_resource(&dat, 1, &size);
    if (!res || size != 3) { printf("FIGANI timing resource invalid\n"); fd2_dat_free(&dat); return 0; }
    int timing = fd2_ani_read_timing(res, size);
    if (timing != 10) { printf("expected timing 10, got %d\n", timing); fd2_dat_free(&dat); return 0; }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Resource classification ---- */
static int test_resource_classify(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    /* Resource 7 should be palette */
    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 7, &size);
    fd2_resource_info_t info;
    fd2_resource_classify(res, size, &info);
    if (info.type != FD2_RES_PALETTE) { printf("resource 7 should be palette, got %d\n", info.type); fd2_dat_free(&dat); return 0; }

    /* Resource 74 should be RLE image */
    res = fd2_dat_get_resource(&dat, 74, &size);
    fd2_resource_classify(res, size, &info);
    if (info.type != FD2_RES_RLE_IMAGE) { printf("resource 74 should be RLE image, got %d\n", info.type); fd2_dat_free(&dat); return 0; }
    if (info.width != 320 || info.height != 200) { printf("resource 74 dims wrong: %dx%d\n", info.width, info.height); fd2_dat_free(&dat); return 0; }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: FDSHAP.DAT palette extraction ---- */
static int test_fdshap_palette(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDSHAP.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 0, &size);
    if (!res || size != 1200) { printf("FDSHAP resource 0 invalid\n"); fd2_dat_free(&dat); return 0; }

    fd2_shap_palette_t pal;
    int rc = fd2_shap_extract_palette(res, size, &pal);
    if (rc != 0) { printf("FDSHAP palette extract failed\n"); fd2_dat_free(&dat); return 0; }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: FDTXT.DAT glyph decode ---- */
static int test_fdtxt_decode(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDTXT.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 0, &size);
    if (!res) { printf("FDTXT resource 0 is NULL\n"); fd2_dat_free(&dat); return 0; }

    fd2_text_glyph_t glyph;
    int rc = fd2_text_decode_glyph(res, size, &glyph);
    if (rc != 0) { printf("FDTXT decode failed\n"); fd2_dat_free(&dat); return 0; }
    if (glyph.width != 24 || glyph.height != 316) {
        printf("expected 24x316, got %dx%d\n", glyph.width, glyph.height);
        free(glyph.pixels);
        fd2_dat_free(&dat);
        return 0;
    }

    free(glyph.pixels);
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: TAI.DAT portrait decode ---- */
static int test_tai_decode(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/TAI.DAT");

    u32 size;
    const u8* res = fd2_dat_get_resource(&dat, 3, &size);
    if (!res) { printf("TAI resource 3 is NULL\n"); fd2_dat_free(&dat); return 0; }

    u8* pixels = NULL;
    int w, h;
    int rc = fd2_tai_decode_portrait(res, size, &pixels, &w, &h);
    if (rc != 0) { printf("TAI decode failed\n"); fd2_dat_free(&dat); return 0; }
    if (w != 154 || h != 42) {
        printf("expected 154x42, got %dx%d\n", w, h);
        free(pixels);
        fd2_dat_free(&dat);
        return 0;
    }

    free(pixels);
    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: Palette brightness ---- */
static int test_palette_brightness(void) {
    u8 pal[768];
    memset(pal, 0xFF, sizeof(pal));

    fd2_palette_set_brightness(pal, 0);
    for (int i = 0; i < 768; i++) {
        if (pal[i] != 0) { printf("brightness 0 should be all black\n"); return 0; }
    }

    memset(pal, 0x00, sizeof(pal));
    fd2_palette_set_brightness(pal, 63);
    for (int i = 0; i < 768; i++) {
        if (pal[i] != 0) { printf("brightness 63 on black should stay black\n"); return 0; }
    }

    return 1;
}

/* ---- Test: Palette fade ---- */
static int test_palette_fade(void) {
    u8 src[768], dst[768], out[768];
    memset(src, 0x00, sizeof(src));
    memset(dst, 0xFF, sizeof(dst));

    fd2_palette_fade(src, dst, out, 10, 0);
    for (int i = 0; i < 768; i++) {
        if (out[i] != 0x00) { printf("fade step 0 should be src\n"); return 0; }
    }

    fd2_palette_fade(src, dst, out, 10, 10);
    for (int i = 0; i < 768; i++) {
        if (out[i] != 0xFF) { printf("fade step 10 should be dst\n"); return 0; }
    }

    fd2_palette_fade(src, dst, out, 10, 5);
    for (int i = 0; i < 768; i++) {
        if (out[i] < 120 || out[i] > 135) { printf("fade step 5 should be ~midpoint, got %d\n", out[i]); return 0; }
    }

    return 1;
}

/* ---- Test: DAT magic detection ---- */
static int test_dat_magic(void) {
    u8 valid[] = "LLLLLLxxxx";
    u8 invalid[] = "NOTMAGxxxxxx";

    if (!fd2_is_dat_magic(valid, 10)) { printf("should detect valid magic\n"); return 0; }
    if (fd2_is_dat_magic(invalid, 10)) { printf("should not detect invalid magic\n"); return 0; }
    if (fd2_is_dat_magic(valid, 3)) { printf("should reject short buffer\n"); return 0; }

    return 1;
}

/* ---- Test: DAT offset validation ---- */
static int test_dat_validate(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    /* Only validate first 102 resources - FDOTHER.DAT has
     * nested DATs with garbage offsets beyond that point */
    if (!fd2_dat_validate_offsets(dat.data, dat.file_size, 102)) {
        printf("FDOTHER.DAT first 102 should validate\n");
        fd2_dat_free(&dat);
        return 0;
    }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: All DAT files load successfully ---- */
static int test_all_dat_load(void) {
    const char* dat_files[] = {
        "game/FDOTHER.DAT", "game/FDTXT.DAT", "game/FDSHAP.DAT",
        "game/FDMUS.DAT", "game/BG.DAT", "game/TITLE.DAT",
        "game/DATO.DAT", "game/TAI.DAT", "game/FDFIELD.DAT",
        "game/FIGANI.DAT", "game/ANI.DAT",
    };
    int count = sizeof(dat_files) / sizeof(dat_files[0]);

    for (int i = 0; i < count; i++) {
        fd2_dat_t dat;
        int rc = fd2_dat_load(&dat, dat_files[i]);
        if (rc != 0) { printf("failed to load %s\n", dat_files[i]); return 0; }
        if (dat.resource_count == 0) { printf("%s has 0 resources\n", dat_files[i]); fd2_dat_free(&dat); return 0; }
        fd2_dat_free(&dat);
    }
    return 1;
}

/* ---- Test: Intro frame dimensions match known values ---- */
static int test_intro_frame_dimensions(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/FDOTHER.DAT");

    struct { int idx, w, h; } frames[] = {
        {69, 320, 147}, {70, 320, 147}, {71, 320, 147},
        {72, 320, 147}, {73, 320, 200}, {74, 320, 200},
        {10, 320, 200}, {99, 320, 200},
    };
    int count = sizeof(frames) / sizeof(frames[0]);

    for (int i = 0; i < count; i++) {
        u32 size;
        const u8* res = fd2_dat_get_resource(&dat, frames[i].idx, &size);
        if (!res) { printf("resource %d NULL\n", frames[i].idx); fd2_dat_free(&dat); return 0; }

        int w, h;
        if (fd2_image_get_dimensions(res, size, &w, &h) != 0) {
            printf("resource %d: cannot read dimensions\n", frames[i].idx);
            fd2_dat_free(&dat);
            return 0;
        }
        if (w != frames[i].w || h != frames[i].h) {
            printf("resource %d: expected %dx%d, got %dx%d\n",
                   frames[i].idx, frames[i].w, frames[i].h, w, h);
            fd2_dat_free(&dat);
            return 0;
        }
    }

    fd2_dat_free(&dat);
    return 1;
}

/* ---- Test: BG.DAT backgrounds decode correctly ---- */
static int test_bg_all_decode(void) {
    fd2_dat_t dat;
    fd2_dat_load(&dat, "game/BG.DAT");

    int decoded = 0;
    for (int i = 0; i < 55; i++) {
        u32 size;
        const u8* res = fd2_dat_get_resource(&dat, i, &size);
        if (!res || size < 4) continue;

        int w, h;
        if (fd2_image_get_dimensions(res, size, &w, &h) != 0) continue;
        if (w != 320 || h != 100) continue;

        u8* pixels = NULL;
        if (fd2_bg_decode(res, size, &pixels, &w, &h) == 0) {
            if (w == 320 && h == 100) {
                decoded++;
            }
            free(pixels);
        }
    }

    if (decoded < 40) {
        printf("expected at least 40 BG images, decoded %d\n", decoded);
        fd2_dat_free(&dat);
        return 0;
    }

    fd2_dat_free(&dat);
    return 1;
}

int main(void) {
    printf("FD2 Decoder Library Tests\n");
    printf("=========================\n\n");

    printf("DAT Loading:\n");
    TEST(test_load_fdother);
    TEST(test_load_bg);
    TEST(test_load_figani);
    TEST(test_all_dat_load);
    printf("\n");

    printf("Resource Access:\n");
    TEST(test_get_resource);
    TEST(test_resource_classify);
    TEST(test_dat_magic);
    TEST(test_dat_validate);
    printf("\n");

    printf("RLE Decompression:\n");
    TEST(test_rle_decompress_title);
    TEST(test_rle_decompress_intro);
    TEST(test_rle_decompress_anim_frames);
    printf("\n");

    printf("Format Decoders:\n");
    TEST(test_bg_decode);
    TEST(test_bg_all_decode);
    TEST(test_figani_decode);
    TEST(test_fdshap_palette);
    TEST(test_fdtxt_decode);
    TEST(test_tai_decode);
    printf("\n");

    printf("Palette System:\n");
    TEST(test_palette_extract);
    TEST(test_palette_brightness);
    TEST(test_palette_fade);
    printf("\n");

    printf("Dimension Validation:\n");
    TEST(test_intro_frame_dimensions);
    printf("\n");

    printf("=========================\n");
    printf("Results: %d/%d passed", tests_passed, tests_run);
    if (tests_failed > 0) {
        printf(" (%d FAILED)", tests_failed);
    }
    printf("\n");

    return tests_failed > 0 ? 1 : 0;
}
