#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Inventario_de_cartas.h"

int main(){
    Carta_Monstro carta;
    Adiciona_Carta_Monstro(&carta);
    Imprime_Carta_Monstro(&carta);
}