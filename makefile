CC=gcc
CFLAGS=-c -Wall

all: main

main: Carta_Monstro.o Carta_Magica.o main.o
    $(CC) Carta_Monstro.o Carta_Magica.o main.o -o main

Carta_Monstro.o: Carta_Monstro.c Carta_Monstro.h
    $(CC) $(CFLAGS) Carta_Monstro.c

Carta_Magica.o: Carta_Magica.c Carta_Magica.h
    $(CC) $(CFLAGS) Carta_Magica.c

main.o: main.c
    $(CC) $(CFLAGS) main.c

clean:
    rm -rf *o main
