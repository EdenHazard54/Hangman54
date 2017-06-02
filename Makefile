build: hangman.cpp
	g++ -Wall hangman.cpp -o hangman
CFLAGS = -Wall -Werror
.PHONY: clean all
