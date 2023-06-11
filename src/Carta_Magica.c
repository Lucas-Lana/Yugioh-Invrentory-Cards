#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Carta_Magica.h"

void Imprime_Carta_Magica(Carta_Magica *carta){
    printf("\n------------------------------------\n");
    printf("Nome da Carta: %s\n", carta->nome);
    printf("Icone: %s\n", carta->icone);
    printf("Texto: %s\n", carta->texto);
    printf("------------------------------------\n");
}

void Adiciona_Carta_Magica(Carta_Magica *carta){
    Nome_Magica(carta);
    Icone_Magica(carta);
    fflush(stdin);
    Texto_Magica(carta);
}

void Nome_Magica(Carta_Magica *carta){
    printf("\nDigite o nome da carta:\n");
    fgets(carta->nome, sizeof(carta->nome), stdin);
    size_t len = strlen(carta->nome);
    if (carta->nome[len-1] == '\n') {
        carta->nome[len-1] = '\0';
    }
    printf("\n");
}

void Icone_Magica(Carta_Magica *carta){
    printf("\nQual o tipo da carta magica:\n");
    printf("1) Campo\n2) Continua\n3) Equipamento\n4) Rapida\n5) Resposta\n6) Ritual\n\n");
    int atributo_int;
    scanf("%d",&atributo_int);
    switch (atributo_int)
    {
    case 1:
        strcpy(carta->icone, "CAMPO");
        break;
    case 2:
        strcpy(carta->icone, "CONTINUA");
        break;
    case 3:
        strcpy(carta->icone, "EQUPAMENTO"); 
        break;
    case 4:
        strcpy(carta->icone, "RAPIDA"); 
        break;
    case 5:
        strcpy(carta->icone, "RESPOSTA");
        break;
    case 6:
        strcpy(carta->icone, "RITUAL");
        break;
    default:
        printf("Tipo de carta magica invalida");
        break;
    }

}

void Texto_Magica(Carta_Magica *carta){
    printf("\nDigite a descrição da carta:\n");
    fgets(carta->texto, sizeof(carta->texto), stdin);
    size_t len = strlen(carta->texto);
    if (carta->texto[len-1] == '\n') {
        carta->texto[len-1] = '\0';
    }
    printf("\n");
}