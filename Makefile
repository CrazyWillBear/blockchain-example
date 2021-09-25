CC=g++

all: build run

build:
	mkdir -p ./bin/
	$(CC) ./src/*.cpp -o ./bin/main

run:
	./bin/main