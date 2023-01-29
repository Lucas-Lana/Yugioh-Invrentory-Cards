#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Carta_Monstro.h"
#include "Carta_Magica.h"

int main(){
    Carta_Magica carta;
    Adiciona_Carta_Magica(&carta);
    Imprime_Carta_Magica(&carta);
}