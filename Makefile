

TARGET = program          # .exe 없음 (Windows는 program.exe)
SRCS = main.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f $(OBJS) $(TARGET)