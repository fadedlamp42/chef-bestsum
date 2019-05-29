all:
	clear
	g++ main.cpp -lm -o out -Wall
	./out < in.txt
	cat log.txt

clean:
	rm out log.txt
