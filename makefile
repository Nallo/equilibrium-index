all: compile

clean:
	rm equilibrium-index

compile:
	gcc -Wall -o equilibrium-index equilibrium-index.c
