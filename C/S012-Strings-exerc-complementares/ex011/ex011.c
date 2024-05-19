/*
Fazer um programa de “criptografia” (codificação de dados visando a privacidade de
acesso as informações), onde dada uma string (vetor de caracteres) este programa
codifique os dados através de um processo de substituição de letras. Você pode definir o
seu próprio método de criptografia, desde que depois seja possível reverter este processo,
ou seja, um código criptografado deve poder ser convertido novamente ao valor inicial.
Por exemplo:
Entre com o texto (string) a ser criptografado: LinguagemC
Texto criptografado: MjohvbhfnD
Dica: Caracteres também permitem operações numéricas como: Letra = Letra + 1; Somar
um ao código de uma letra, implica em transformá-la no caracter seguinte
(http://pt.wikipedia.org/wiki/ASCII).
*/

#include <stdio.h>
#include <string.h>

void Criptografa (char *entrada) {
    for (int i=0; entrada[i] != '\0'; i++) {
        if ((entrada[i] >= 65 && entrada[i] <= 90) || (entrada[i] >= 97 && entrada[i] <= 122)) {
            entrada[i] += 1;
            if ((entrada[i] > 90 && entrada[i] < 97) || (entrada[i] > 122)) {
                entrada[i] -= 26;
            }
        }
    }
}

int main () {
    char fraseNormal[101];
    printf("Digite uma frase para ser criptografada: ");
    fgets(fraseNormal, 101, stdin);
    Criptografa(fraseNormal);
    printf("%s", fraseNormal);
}