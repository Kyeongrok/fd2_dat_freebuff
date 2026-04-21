# Makefile for FD2 reimplementation

CC = gcc
CFLAGS = -Wall -Wextra -std=gnu99 -Iinclude -Isdl2_install/include/SDL2 -O2
LDFLAGS = -Lsdl2_install/lib -Wl,-rpath,'$$ORIGIN/../sdl2_install/lib' -lSDL2 -lm

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# ---- Source Files ----

# Core decoder library (no SDL dependency)
DECODER_SRCS = $(SRC_DIR)/fd2_decoder.c
DECODER_OBJS = $(OBJ_DIR)/fd2_decoder.o

# Game framework (requires SDL2)
GAME_SRCS = $(SRC_DIR)/fd2_input.c \
            $(SRC_DIR)/fd2_render.c \
            $(SRC_DIR)/fd2_audio.c \
            $(SRC_DIR)/fd2_resources.c \
            $(SRC_DIR)/fd2_afm.c \
            $(SRC_DIR)/fd2_game.c \
            $(SRC_DIR)/main.c
GAME_OBJS = $(OBJ_DIR)/fd2_input.o \
            $(OBJ_DIR)/fd2_render.o \
            $(OBJ_DIR)/fd2_audio.o \
            $(OBJ_DIR)/fd2_resources.o \
            $(OBJ_DIR)/fd2_afm.o \
            $(OBJ_DIR)/fd2_game.o \
            $(OBJ_DIR)/main.o

# Legacy standalone programs
TEST_OBJS = $(OBJ_DIR)/fd2_decoder_test.o
INTRO_OBJS = $(OBJ_DIR)/fd2_intro.o $(DECODER_OBJS)

# ---- Targets ----

TARGET_GAME   = $(BIN_DIR)/fd2
TARGET_TEST   = $(BIN_DIR)/fd2_decoder_test
TARGET_INTRO  = $(BIN_DIR)/fd2_intro

.PHONY: all clean test decoder intro game

all: $(TARGET_GAME) $(TARGET_TEST) $(TARGET_INTRO)

game: $(TARGET_GAME)

decoder: $(TARGET_TEST)

test: $(TARGET_TEST)
	./$(TARGET_TEST)

intro: $(TARGET_INTRO)

# ---- Main game ----

$(TARGET_GAME): $(GAME_OBJS) $(DECODER_OBJS) | $(BIN_DIR)
	$(CC) $^ -o $@ $(LDFLAGS)

# ---- Decoder test (no SDL) ----

$(TARGET_TEST): $(DECODER_OBJS) $(TEST_OBJS) | $(BIN_DIR)
	$(CC) $^ -o $@ -lm

# ---- Legacy intro player ----

$(TARGET_INTRO): $(INTRO_OBJS) | $(BIN_DIR)
	$(CC) $^ -o $@ $(LDFLAGS)

# ---- Compilation rules ----

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)/fd2 $(BIN_DIR)/fd2_decoder_test $(BIN_DIR)/fd2_intro
