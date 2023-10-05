# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Source files and executable name
SRC = major1.c Endian.c parity.c clz.c rotate.c
EXE = program

# Targets and dependencies
all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXE)

.PHONY: all clean
