#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Inventario_de_cartas.h"

void Adiciona_Carta_Monstro(Carta_Monstro *carta){
    Nome_Monstro(carta);
    Nivel_Monstro(carta);
    Atributo_Monstro(carta);
    Tipo_Monstro(carta);
    printf("\n.....\nTrabalho em Progresso....");
}

void Nome_Monstro(Carta_Monstro *carta){
    
    printf("\nDigite o nome do monstro:\n");
    scanf("%s", carta->nome);
    printf("\n");
}

void Nivel_Monstro(Carta_Monstro *carta){
    
    printf("\nDigite o nivel do monstro (numero):\n");
    scanf("%d",carta->nivel);
    printf("\n");
}

void Atributo_Monstro(Carta_Monstro *carta){
   
    printf("\nQual o atributo do monstro:\n");
    printf("1) Trevas\n2) Terra\n3) Fogo\n4) Luz\n5) Agua\n6) Vento\n\n");
    int atributo_int;
    scanf("%d",&atributo_int);
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
   
    printf("\nQual o tipo do monstro:\n");
    char* monsterTypes[] = {"Aqua", "Besta", "Besta Alada", "Besta Divina", "Ciberso", "Demônio", "Dinossauro", 
    "Dragão", "Deus Criador", "Fada", "Guerreiro", "Inseto", "Mago", "Máquina", "Peixe", "Planta", "Psíquico",
    "Piro", "Réptil", "Rocha", "Serpente Marinha", "Trovão", "Wyrm", "Zumbi"};

    for (int i = 0; i < 24; i++) {
        if(i<=8){
            printf("0%d) %-21s ", i+1, monsterTypes[i]);
                if((i+1)%2==0)
                    printf("\n");

        }
        
        else {
            printf("%d) %-21s ", i+1, monsterTypes[i]);
                if((i+1)%2==0)
                    printf("\n");
        }
    }
    

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
        default:
            printf("Tipo Inválido");
            break;
    }
}