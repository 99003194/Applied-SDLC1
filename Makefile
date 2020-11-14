a:main.o admi.o 
	gcc -o a main.o admi.o
main.o:main.c admi.h 
	gcc -c main.c 
admi.o:admi.c admi.h 
	gcc -c admi.c 