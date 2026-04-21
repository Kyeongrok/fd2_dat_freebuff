#ifndef FD2_AUDIO_H
#define FD2_AUDIO_H

#include "fd2_decoder.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================
 * FD2 Audio System
 *
 * The original game uses Miles Sound System (AIL) for MIDI playback
 * via FDMUS.DAT and digital audio via ADRV688.DIG / *.DIG drivers.
 *
 * Phase 1 (current): Stub implementation - no sound, API ready.
 * Phase 2: SDL_mixer for MIDI (MidiFile from FDMUS.DAT) + WAV/OGG SFX.
 * Phase 3: Full AIL-compatible MIDI with proper bank/instrument mapping.
 * ======================================================================== */

/* ---- Audio State ---- */
typedef struct fd2_audio {
    bool    initialized;
    bool    muted;
    int     music_volume;     /* 0-128 (SDL_mixer scale) */
    int     sfx_volume;       /* 0-128 */

    /* Internal (SDL_mixer objects, hidden behind void* for header compat) */
    void*   current_music;    /* Mix_Music* or NULL */
    int     music_playing;    /* Track ID currently playing */
} fd2_audio_t;

/* ---- Lifecycle ---- */

/*
 * Initialize the audio subsystem.
 * Returns 0 on success, -1 on failure (non-fatal: game runs without sound).
 */
int fd2_audio_init(fd2_audio_t* audio);

/*
 * Shut down and free all audio resources.
 */
void fd2_audio_shutdown(fd2_audio_t* audio);

/* ---- Music ---- */

/*
 * Play a MIDI/music track from FDMUS.DAT.
 * track_id: resource index in FDMUS.DAT
 * loops: -1 = infinite, 0 = play once, N = play N+1 times
 * Returns 0 on success, -1 on failure.
 */
int fd2_audio_play_music(fd2_audio_t* audio, int track_id, int loops);

/*
 * Stop currently playing music.
 */
void fd2_audio_stop_music(fd2_audio_t* audio);

/*
 * Set music volume (0-128).
 */
void fd2_audio_set_music_volume(fd2_audio_t* audio, int volume);

/*
 * Fade music out over the given milliseconds.
 */
void fd2_audio_fade_music(fd2_audio_t* audio, int ms);

/* ---- Sound Effects ---- */

/*
 * Play a sound effect.
 * sfx_id: index into the sound effects table
 * Returns 0 on success, -1 on failure.
 */
int fd2_audio_play_sfx(fd2_audio_t* audio, int sfx_id);

/*
 * Set SFX volume (0-128).
 */
void fd2_audio_set_sfx_volume(fd2_audio_t* audio, int volume);

/* ---- Utility ---- */

/*
 * Check if music is currently playing.
 */
bool fd2_audio_music_playing(const fd2_audio_t* audio);

/*
 * Toggle mute state.
 */
void fd2_audio_toggle_mute(fd2_audio_t* audio);

#ifdef __cplusplus
}
#endif

#endif /* FD2_AUDIO_H */
