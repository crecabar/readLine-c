
CFLAGS = -I. -Wall
CC = gcc

TARGET = main

SRC = main.c readLine.c

OBJS = $(SRC:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $< $@

clean:
	rm -f $(TARGET) *.o