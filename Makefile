

ludo : fonction_tematio.c fonction_tematio.h main_tematio.c
	gcc -o ludo fonction_tematio.c main_tematio.c -g -O0 -lm -lpthread -fopenmp -lSDL2 -lSDL2_ttf

run_ludo:ludo
	./ludo

run_valgrind:ludo
	valgrind  --tool=memcheck --leak-check=yes --leak-resolution=low --show-reachable=yes ./ludo

clean :
	rm  ludo
 profile :
	gcc -Wall -pg fonction_tematio.c main_tematio.c -lm -lpthread -o ludo