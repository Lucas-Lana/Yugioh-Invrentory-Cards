executavel: main.o Inventario_de_cartas.o
    gcc -o executavel main.o Inventario_de_cartas.o

main.o: main.c Inventario_de_cartas.h
    gcc -c main.c

Inventario_de_cartas.o: Inventario_de_cartas.c Inventario_de_cartas.h
    gcc -c Inventario_de_cartas.c