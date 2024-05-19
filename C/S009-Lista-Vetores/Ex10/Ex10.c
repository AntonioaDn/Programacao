/*
Ler um vetor de 16 posições. Troque os 8 primeiros valores pelos 8
últimos. Escreva ao final o vetor obtido.
*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void PreencheVetores(int a[16])
{
    srand(time(NULL));
    for (int i = 0; i < 16; i++)
    {
        a[i] = rand() % 100;
    }
}
void InverteVetor (int a[16]) {
        int VAux[8];
        for (int i=0; i<8; i++) {
            VAux[i] = a[i];
        }
        for (int i=0; i<8; i++) {
            a[i] = a[8+i];
        }
        for (int j=8; j<16; j++) {
            a[j] = VAux[j-8];
        }
    }

void MostraVetor(int a[16])
{
    for (int i = 0; i < 16; i++)
    {
        printf("%2d ", a[i]);
    }
    printf("\n");
}
int main () {
    int a[16];
    PreencheVetores(a);
    MostraVetor(a);
    InverteVetor(a);
    MostraVetor(a);
}
/*
Preciso resolver a questão a partir do 9° elemento do vetor.
Qual a lógica? R: Armazenar os primeiros 8 elementos do vetor em outro vetor auxiliar,
em seguida inverter os 8 primeiros com os oito ultimos, a seguir fazer os 8 ultimos receberem
os elementos do vetor auxiliar
*/