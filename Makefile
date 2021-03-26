all:build

build:
	g++ -s -Wall -static -Os cpp/*.cpp -o tools
