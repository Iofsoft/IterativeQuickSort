CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = QuickSort.c Stack.c Array.c Main.c
OBJS = $(SRCS:.c=.o)
TARGET = QuickSort

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
