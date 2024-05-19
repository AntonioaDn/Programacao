/*
Faça um programa para criptografar uma frase dada pelo usuário. A criptografia deverá
inverter a frase.
Frase: EU ESTOU NA ESCOLA
Saída: ALOCSE AN UOTSE UE
*/
#include <stdio.h>
#include <string.h>

void CriptografaFrases(const char *entrada, char *fraseCriptografada) {
    int tamanho = strlen(entrada);
    for (int i = 0; i < tamanho; i++) {
        fraseCriptografada[i] = entrada[tamanho - i - 1];
    }
    fraseCriptografada[tamanho] = '\0';
}

int main() {
    char entrada[200];
    printf("Digite uma frase de ate 200 caracteres para ser invertida: ");
    fgets(entrada, sizeof(entrada), stdin);
    
    char fraseCriptografada[200];
    CriptografaFrases(entrada, fraseCriptografada);
    
    printf("%s", fraseCriptografada);
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// char *CriptografaFrases (const char *entrada) {
//     int tamanho = strlen(entrada);
//     char fraseCriptografada[tamanho+1];
//     for (int i=0; i < tamanho; i++) {
//         fraseCriptografada[i] = entrada[tamanho - i - 1];
//     }
//     fraseCriptografada[tamanho] = '\0';
//     //printf("%s", fraseCriptografada);
//     return fraseCriptografada;

// }

// int main () {
//     char entrada[200];
//     printf("Digite uma frase de ate 200 caracteres para ser invertida: ");
//     fgets(entrada, sizeof(entrada), stdin);
//     *entrada = CriptografaFrases(entrada);
//     printf("\n\n%s", entrada);
    
// }