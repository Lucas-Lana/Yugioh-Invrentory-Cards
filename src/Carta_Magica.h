

typedef struct Carta_Magica {
    char nome[32];
    char icone[16];
    char texto[480];
}Carta_Magica;

void Imprime_Carta_Magica(Carta_Magica *carta);

void Adiciona_Carta_Magica(Carta_Magica *carta);

void Nome_Magica(Carta_Magica *carta);

void Icone_Magica(Carta_Magica *carta);

void Texto_Magica(Carta_Magica *carta);