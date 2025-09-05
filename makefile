CC = gcc
CFLAGS = -Wall -Wextra -pedantic -Iheaders
SRC_DIR = sources
OBJ_DIR = objects
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))
TARGET = passwordmanager

.PHONY: compile run clean

compile: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

run: compile
	./$(TARGET)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
