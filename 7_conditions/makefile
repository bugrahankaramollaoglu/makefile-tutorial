CC = gcc

CFLAGS = -Wall

SRC_DIR = src

INC_DIR = include

OBJ_DIR = obj

# if it is debugged, compile with -g flag
# for instance if user said: make DEBUG=1
DEBUG ?= 0
ifeq ($(DEBUG), 1)
    CFLAGS += -g
	@echo asdasdasd
endif

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

all: program

program: $(OBJ_FILES)
	$(CC) -o program $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -I$(INC_DIR) -c $< -o $@

clean:
	rm -rf program $(OBJ_DIR)

fclean: clean
	rm -rf program
