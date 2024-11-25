# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Source files and object files
SRC = major1.c Endian.c parity.c clz.c rotate.c
OBJ = $(SRC:.c=.o)
EXE = program

# Default target
all: $(EXE)

# Linking step
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation step
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(EXE) $(OBJ)

.PHONY: all clean
