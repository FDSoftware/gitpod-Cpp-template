OBJS	= src/main.o
SOURCE	= src/main.cpp
HEADER	= 
OUT	= bin/output.exe
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: src/main.cpp
	$(CC) $(FLAGS) src/main.cpp 


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)