CC=g++
CFLAGS=-std=c++17 -Wshadow -Wall -O2 -Wno-unused-result
CALTFLAGS =-std=c++17 -Wshadow -Wall -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG
CONLINEFLAGS=-lm -O2 -std=c++11

all: main.cpp
	$(CC) $(CFLAGS) main.cpp -o test
slow: main.cpp
	$(CC) $(CALTFLAGS) main.cpp -o test
online: main.cpp
	$(CC) $(CONLINEFLAGS) main.cpp -o test

clean:
	rm -f main main.o
