#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "Inventario_de_cartas.h"

void Imprime_Carta_Monstro(Carta_Monstro *carta) {
    printf("\n------------------------------------\n");
    printf("Nome: %s\n", carta->nome);
    printf("Nivel: %d\n", carta->nivel);
    printf("Atributo: %s\n", carta->atributo);
    printf("Tipo: %s\n", carta->tipo);
    printf("ATK/DEF: %d/%d\n", carta->ATK, carta->DEF);
    printf("Texto: %s\n", carta->texto);
    printf("------------------------------------\n");
}

void Adiciona_Carta_Monstro(Carta_Monstro *carta){
    Nome_Monstro(carta);
    Nivel_Monstro(carta);
    Atributo_Monstro(carta);
    Tipo_Monstro(carta);
    ATK_DEF(carta);
    fflush(stdin);
    Texto(carta);
}

void Nome_Monstro(Carta_Monstro *carta){
    printf("\nDigite o nome do monstro:\n");
    fgets(carta->nome, sizeof(carta->nome), stdin);
    size_t len = strlen(carta->nome);
    if (carta->nome[len-1] == '\n') {
        carta->nome[len-1] = '\0';
    }
    printf("\n");
}

void Nivel_Monstro(Carta_Monstro *carta){
    
    printf("\nDigite o nivel do monstro (numero):\n");
    scanf("%d",&carta->nivel);
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
   
    printf("\nQual o tipo do monstro:\n\n");
    char* tipos_monstros[] = {"Aqua", "Besta", "Besta Alada", "Besta Divina", "Ciberso", "Demônio", "Dinossauro", 
    "Dragão", "Deus Criador", "Fada", "Guerreiro", "Inseto", "Mago", "Máquina", "Peixe", "Planta", "Psíquico",
    "Piro", "Réptil", "Rocha", "Serpente Marinha", "Trovão", "Wyrm", "Zumbi"};

    for (int i = 0; i < 24; i++) {
        if(i<=8){
            printf("0%d) %-21s ", i+1, tipos_monstros[i]);
                if((i+1)%2==0)
                    printf("\n");

        }
        
        else {
            printf("%d) %-21s ", i+1, tipos_monstros[i]);
                if((i+1)%2==0)
                    printf("\n");
        }
    }
    

    int opcao;
    printf("\n");
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

void ATK_DEF(Carta_Monstro *carta){
    printf("\nQual é a pontuação de ATK do Monstro:\n");
    scanf("%d",&carta->ATK);
    printf("\nQual é a pontuação de DEF do Monstro:\n");
    scanf("%d",&carta->DEF);
}

void Texto(Carta_Monstro *carta){
    printf("\nDigite o texto/efeito do monstro:\n");
    fgets(carta->texto, sizeof(carta->texto), stdin);
    size_t len = strlen(carta->texto);
    if (carta->texto[len-1] == '\n') {
        carta->texto[len-1] = '\0';
    }
    printf("\n");
}