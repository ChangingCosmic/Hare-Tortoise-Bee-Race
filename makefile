theRace: animals.o race.o
	@gcc -g -Wall animals.o race.o -o theRace -lm
animals.o: animals.c animals.h
	@gcc -g -Wall -c animals.c
race.o: race.c animals.h
	@gcc -g -Wall -c race.c
clean:
	@rm -f race.o animals.o -o theRace