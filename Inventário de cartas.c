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

void Tipo_Monstro(Carta_Monstro *carta){
    printf("Qual o tipo do monstro:\n");
    printf("1) Aqua\n2) Besta\n3) Besta Alada\n4) Besta Divina\n5) Ciberso\n6) Demônio\n7) Dinossauro\n8) Dragão\n9) Deus Criador\n");
    printf("10) Fada (antigamente conhecido como Anjo)\n11) Guerreiro\n12) Inseto (antigamente conhecido como Insecto)\n13) Mago\n");
    printf("14) Máquina\n15) Peixe\n16) Planta\n17) Psíquico\n18) Piro\n19) Réptil\n20) Rocha\n21) Serpente Marinha\n22) Trovão\n23) Wyrm\n24) Zumbi\n");

        int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            strcpy(carta->tipo, "Aqua");
            break;
        case 2:
            strcpy(carta->tipo, "Besta");
            break;
        case 3:
            strcpy(carta->tipo, "Besta Alada");
            break;
        case 4:
            strcpy(carta->tipo, "Besta Divina");
            break;
        case 5:
            strcpy(carta->tipo, "Ciberso");
            break;
        case 6:
            strcpy(carta->tipo, "Demônio");
            break;
        case 7:
            strcpy(carta->tipo, "Dinossauro");
            break;
        case 8:
            strcpy(carta->tipo, "Dragão");
            break;
        case 9:
            strcpy(carta->tipo, "Deus Criador");
            break;
        case 10:
            strcpy(carta->tipo, "Fada (antigamente conhecido como Anjo)");
            break;
        case 11:
            strcpy(carta->tipo, "Guerreiro");
            break;
        case 12:
            strcpy(carta->tipo, "Inseto (antigamente conhecido como Insecto)");
            break;
        case 13:
            strcpy(carta->tipo, "Mago");
            break;
        case 14:
            strcpy(carta->tipo, "Máquina");
            break;
        case 15:
            strcpy(carta->tipo, "Peixe");
            break;
        case 16:
            strcpy(carta->tipo, "Planta");
            break;
        case 17:
            strcpy(carta->tipo, "Psíquico");
            break;
        case 18:
            strcpy(carta->tipo, "Piro");
            break;
        case 19:
            strcpy(carta->tipo, "Réptil");
            break;
        case 20:
            strcpy(carta->tipo, "Rocha");
            break;
        case 21:
            strcpy(carta->tipo, "Serpente Marinha");
            break;
        case 22:
            strcpy(carta->tipo, "Trovão");
            break;
        case 23:
            strcpy(carta->tipo, "Wyrm");
            break;
        case 24:
            strcpy(carta->tipo, "Zumbi");
            break;
    }
} 