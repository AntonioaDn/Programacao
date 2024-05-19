/*
Fazer um programa que leia uma string e converta todos os caracteres desta string
para maiúsculo. Depois de convertida a string, exibir o resultado na tela.
Dicas:
(1) Uma string de caracteres é um vetor do tipo char, terminado pelo caractere ‘\0’;
(2) O código ASCII da letra ‘a’ (minúsculo) é 97 e o código da letra ‘A’ (maiúsculo) é
65, o código da letra ‘z’ é 122 e o código da letra ‘Z’ é 90;
(3) Cuidado para não acabar convertendo aquilo que não é nem texto e nem está em
minúsculas! Por exemplo:
Entre com um texto: Prezados Alunos de IP (2023.2)
Texto convertido: PREZADOS ALUNOS DE IP (2023.2)
*/

#include <stdio.h>
#include <string.h>

void ConverteParaMaiusculo (char *entrada) {
    for (int i=0; entrada[i] != '\0'; i++) {
        if (entrada[i] >= 97 && entrada[i] <= 122) {
            entrada[i] -= 32;
        }
    }
}

int main () {
    char frase[101];
    printf("Digite uma frase para ser convertida para maiusculo: ");
    fgets(frase, 101, stdin);
    ConverteParaMaiusculo(frase);
    printf("%s", frase);
}