#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Inventário de cartas.h"

void Nome_Monstro(Carta_Monstro *carta){
    printf("Digite o nome do monstro:\n");
    scanf("%s", carta->nome);
}

void Nivel_Monstro(Carta_Monstro *carta){
    printf("\nDigite o nivel do monstro (numero):\n");
    scanf("%d",carta->nivel);
}

void Atributo_Monstro(Carta_Monstro *carta){
    printf("\nQual o atributo do monstro:\n");
    printf("1) Trevas\n2) Terra\n3) Fogo\n4) Luz\n5) Agua\n6) Vento\n");
    int atributo_int, tipo_int;
    scanf("\n%d",atributo_int);
    switch (atributo_int)
    {
    case 1:
        strcpy(carta->atributo, "TREVAS");
        break;
    case 2:
        strcpy(carta->atributo, "TERRA");
        break;
    case 3:
        strcpy(carta->atributo, "FOGO"); 
        break;
    case 4:
        strcpy(carta->atributo, "LUZ"); 
        break;
    case 5:
        strcpy(carta->atributo, "AGUA");
        break;
    case 6:
        strcpy(carta->atributo, "VENTO");
        break;
    default:
        printf("Atributo invalido");
        break;
    }
}
