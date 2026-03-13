CC=gcc
CFLAGS = -g -Wall
TARGET = notebook
SRC = notebook.c
	
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
