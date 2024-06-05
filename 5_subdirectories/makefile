CC = gcc

SRC_DIR = src

# directory where librarie(s) are
INC_DIR = include

# directory where .o files will be extracted to
OBJ_DIR = obj


SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
# or you could say
# SRC_FILES = $(shell ls $(SRC_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

all: program

program: $(OBJ_FILES)
	$(CC) -o program $(OBJ_FILES)
	@echo "\033[32mCompiled ✅\033[0;37m"


# -p means ignore parent directory if extant
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -I$(INC_DIR) -c $< -o $@

clean:
	@echo "\033[0;31mCleaning objects🧹"
	rm -rf program $(OBJ_DIR)
	
fclean: clean
	@echo "\033[0;31mRemoving $(NAME) 🗑\033[0;37m"
