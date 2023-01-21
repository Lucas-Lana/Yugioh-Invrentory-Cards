/*Esse projeto viza criar um sistema da qual sirva de inventário de cartas de yu-gi-oh.
Com os meus conhecimentos atuais é possível apenas criar um ssitema local.
No futuro a ideia é de que possua um banco de dados alimentado por usuários, e claro interfaces visuais*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct Carta_Monstro
{   
    char nome[64];
    int nivel;
    char atributo[7];
    char tipo[82];
    int ATK;
    int DEF;
    char texto[480];
}Carta_Monstro;

void adiciona_Carta_Monstro(Carta_Monstro*carta){
    printf("Digite o nome do monstro:\n");
    scanf("%s", carta->nome);
    printf("\nDigite o nivel do monstro (numero):\n");
    scanf("%d",carta->nivel);
    printf("\nQual o atributo do monstro:\n");
    printf("1) Trevas\n2) Terra\n3) Fogo\n4) Luz\n5) Agua\n6) Vento\n");
    int atributo_int;
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
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    Carta_Monstro carta;
    adiciona_Carta_Monstro(&carta);
}