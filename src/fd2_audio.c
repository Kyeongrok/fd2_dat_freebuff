/**
 * FD2 Audio System - Stub Implementation
 *
 * Phase 1: All functions are stubs that return success.
 * The API is ready for SDL_mixer integration in Phase 2.
 *
 * Phase 2 will:
 *   - Use SDL_mixer to play MIDI files from FDMUS.DAT
 *   - Load and play WAV/OGG sound effects
 *   - Implement proper volume control and fading
 */

#include "fd2_audio.h"
#include <stdio.h>

/* ---- Lifecycle ---- */

int fd2_audio_init(fd2_audio_t* audio) {
    if (!audio) return -1;

    audio->initialized   = false;  /* No SDL_mixer yet */
    audio->muted         = false;
    audio->music_volume  = 128;
    audio->sfx_volume    = 128;
    audio->current_music = NULL;
    audio->music_playing = -1;

    /* Phase 2: SDL_Init(SDL_INIT_AUDIO) + Mix_OpenAudio() */

    printf("fd2_audio: stub initialized (no sound)\n");
    return 0;
}

void fd2_audio_shutdown(fd2_audio_t* audio) {
    if (!audio) return;

    if (audio->current_music) {
        /* Phase 2: Mix_FreeMusic((Mix_Music*)audio->current_music); */
        audio->current_music = NULL;
    }

    /* Phase 2: Mix_CloseAudio(); */

    audio->initialized = false;
}

/* ---- Music ---- */

int fd2_audio_play_music(fd2_audio_t* audio, int track_id, int loops) {
    if (!audio) return -1;

    audio->music_playing = track_id;

    /* Phase 2:
     *   char path[512];
     *   snprintf(path, sizeof(path), "FDMUS_track_%d.mid", track_id);
     *   Mix_Music* music = Mix_LoadMUS(path);
     *   if (music) {
     *       Mix_PlayMusic(music, loops);
     *       audio->current_music = music;
     *   }
     */

    (void)loops;
    return 0;
}

void fd2_audio_stop_music(fd2_audio_t* audio) {
    if (!audio) return;

    /* Phase 2: Mix_HaltMusic(); */
    audio->music_playing = -1;
}

void fd2_audio_set_music_volume(fd2_audio_t* audio, int volume) {
    if (!audio) return;
    audio->music_volume = (volume < 0) ? 0 : (volume > 128) ? 128 : volume;

    /* Phase 2: Mix_VolumeMusic(audio->music_volume); */
}

void fd2_audio_fade_music(fd2_audio_t* audio, int ms) {
    if (!audio) return;

    /* Phase 2: Mix_FadeOutMusic(ms); */
    (void)ms;
}

/* ---- Sound Effects ---- */

int fd2_audio_play_sfx(fd2_audio_t* audio, int sfx_id) {
    if (!audio) return -1;

    /* Phase 2:
     *   Mix_Chunk* chunk = sfx_cache[sfx_id];
     *   if (chunk) Mix_PlayChannel(-1, chunk, 0);
     */

    (void)sfx_id;
    return 0;
}

void fd2_audio_set_sfx_volume(fd2_audio_t* audio, int volume) {
    if (!audio) return;
    audio->sfx_volume = (volume < 0) ? 0 : (volume > 128) ? 128 : volume;

    /* Phase 2: Mix_Volume(-1, audio->sfx_volume); */
}

/* ---- Utility ---- */

bool fd2_audio_music_playing(const fd2_audio_t* audio) {
    if (!audio) return false;

    /* Phase 2: return Mix_PlayingMusic(); */
    return audio->music_playing >= 0;
}

void fd2_audio_toggle_mute(fd2_audio_t* audio) {
    if (!audio) return;
    audio->muted = !audio->muted;

    /* Phase 2:
     *   if (audio->muted) {
     *       Mix_VolumeMusic(0);
     *       Mix_Volume(-1, 0);
     *   } else {
     *       Mix_VolumeMusic(audio->music_volume);
     *       Mix_Volume(-1, audio->sfx_volume);
     *   }
     */
}
