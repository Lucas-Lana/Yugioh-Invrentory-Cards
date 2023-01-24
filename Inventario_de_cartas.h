#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct Carta_Monstro {   
    char nome[64];
    int nivel;
    char atributo[7];
    char tipo[82];
    int ATK;
    int DEF;
    char texto[480];
}Carta_Monstro;

void Imprime_Carta_Monstro(Carta_Monstro *carta);

void Adiciona_Carta_Monstro(Carta_Monstro *carta);

void Nome_Monstro(Carta_Monstro *carta);

void Nivel_Monstro(Carta_Monstro *carta);

void Atributo_Monstro(Carta_Monstro *carta);

void Tipo_Monstro(Carta_Monstro *carta);

void ATK_DEF(Carta_Monstro *carta);

void Texto(Carta_Monstro *carta);