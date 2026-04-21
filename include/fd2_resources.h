#ifndef FD2_RESOURCES_H
#define FD2_RESOURCES_H

#include "fd2_decoder.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================
 * FD2 Resource Manager
 *
 * Centralizes access to all DAT files used by the game.
 * Based on sub_25BF4 which loads: FDOTHER, FDTXT, FDMUS, FDSHAP,
 * FDFIELD, BG, FIGANI, TAI, DATO, ANI, FDICON.
 *
 * The manager owns the loaded DAT files and provides convenient
 * resource access by (file, index) pairs.
 * ======================================================================== */

/* ---- DAT File IDs ---- */
typedef enum {
    FD2_DAT_FDOTHER = 0,   /* Title, menu, misc graphics + palettes */
    FD2_DAT_FDTXT,         /* Text/font glyphs */
    FD2_DAT_FDMUS,         /* MIDI music data */
    FD2_DAT_FDSHAP,        /* Fighter sprites + palettes */
    FD2_DAT_FDFIELD,       /* Stage/background field data */
    FD2_DAT_BG,            /* Background images */
    FD2_DAT_FIGANI,        /* Fighter animation frames */
    FD2_DAT_TAI,           /* Character portraits */
    FD2_DAT_DATO,          /* Game logic constants/data */
    FD2_DAT_ANI,           /* AFM animation sequences */
    FD2_DAT_FDICON,        /* Icon data (B24 format) */
    FD2_DAT_COUNT
} fd2_dat_id_t;

/* ---- Filename Table ---- */
extern const char* fd2_dat_filenames[FD2_DAT_COUNT];

/* ---- Resource Manager ---- */
typedef struct fd2_resources {
    fd2_dat_t   dats[FD2_DAT_COUNT];   /* Loaded DAT files */
    bool        loaded[FD2_DAT_COUNT]; /* Which files are loaded */
    char        data_dir[512];         /* Base path for DAT files */
} fd2_resources_t;

/* ---- Lifecycle ---- */

/*
 * Initialize the resource manager.
 * data_dir: path to directory containing DAT files.
 * Returns 0 on success, -1 on failure.
 */
int fd2_resources_init(fd2_resources_t* res, const char* data_dir);

/*
 * Shut down and free all loaded resources.
 */
void fd2_resources_shutdown(fd2_resources_t* res);

/* ---- Loading ---- */

/*
 * Load a specific DAT file by ID.
 * Returns 0 on success, -1 on failure.
 */
int fd2_resources_load_dat(fd2_resources_t* res, fd2_dat_id_t id);

/*
 * Load all DAT files. Reports errors but continues loading.
 * Returns the number of files that failed to load.
 */
int fd2_resources_load_all(fd2_resources_t* res);

/* ---- Access ---- */

/*
 * Get a loaded DAT file by ID.
 * Returns NULL if not loaded.
 */
const fd2_dat_t* fd2_resources_get_dat(const fd2_resources_t* res, fd2_dat_id_t id);

/*
 * Get a resource from a specific DAT file.
 * dat_id: which DAT file to access
 * index: resource index within that DAT file
 * out_size: receives the resource size (can be NULL)
 * Returns pointer to resource data, or NULL if not available.
 */
const u8* fd2_resources_get(const fd2_resources_t* res,
                            fd2_dat_id_t dat_id, int index,
                            u32* out_size);

/*
 * Check if a specific DAT file is loaded.
 */
bool fd2_resources_is_loaded(const fd2_resources_t* res, fd2_dat_id_t id);

/* ---- Convenience: Build Paths ---- */

/*
 * Build a full path to a DAT file relative to data_dir.
 * Returns a thread-local static buffer; not safe across calls.
 */
const char* fd2_resources_dat_path(const fd2_resources_t* res, fd2_dat_id_t id);

#ifdef __cplusplus
}
#endif

#endif /* FD2_RESOURCES_H */
