all:
	clear
	g++ main.cpp -lm -o out -Wall
	./out < in.txt
	cat log.txt
	git add main.cpp

clean:
	rm out log.txt
