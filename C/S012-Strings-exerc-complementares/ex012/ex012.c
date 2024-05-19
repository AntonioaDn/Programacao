/*
Fazer um segundo programa, complementar ao anterior, que deve ser capaz de
descriptografar a string, ou seja, deve pegar uma string codificada e retornar ao texto
original. Por exemplo:
Entre com o texto a ser descriptografado: MjohvbhfnD
Texto descriptografado: LinguagemC
Dica: Subtrair um do código de um caracter implica em transformá-lo no caracter anterior.
Exemplo: Letra = ‘A’; Letra = Letra – 1.
*/

#include <stdio.h>
#include <string.h>

void Descriptografa (char *entrada) {
    for (int i=0; entrada[i] != '\0'; i++) {
        if ((entrada[i] >= 65 && entrada[i] <= 90) || (entrada[i] >= 97 && entrada[i] <= 122)) {
            entrada[i] -= 1;
            if ((entrada[i] > 90 && entrada[i] < 97) || (entrada[i] < 65)) {
                entrada[i] += 26;
            }
        }
    }
}

int main () {
    char fraseCriptografada[101];
    printf("Digite uma frase para ser descriptografada: ");
    fgets(fraseCriptografada, 101, stdin);
    Descriptografa(fraseCriptografada);
    printf("%s", fraseCriptografada);
}