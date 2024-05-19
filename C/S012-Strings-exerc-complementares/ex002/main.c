/*
Escreva um programa que verifique a validade de uma senha, sendo a senha válida
“teste”. Se o usuário não acertar a senha o programa deve emitir a mensagem “Acesso
negado”, caso contrário “Acesso permitido”. Informar também o número de tentativas do
usuário. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VerificaValidade(char *entradaUsuario, char *senha, int *tentativas) {
    if (strcmp(entradaUsuario, senha) == 0) {
        (*tentativas)++;
        printf("Acesso permitido\n");
        printf("O numero de tentativas foi: %d\n", *tentativas);
        return 1;
    } else {
        printf("Acesso negado\n");
        (*tentativas)++;
        return 0;
    }
}

int main()
{
    int tentativas=0, resultado=0;
    char senha[] = "teste";
    char entradaUsuario[100];
    do {
        printf("Digite a senha a ser testada: ");
        fgets(entradaUsuario, sizeof(entradaUsuario), stdin);
        entradaUsuario[strcspn(entradaUsuario, "\n")] = 0;
        resultado = VerificaValidade(entradaUsuario, senha, &tentativas);
    } while (resultado != 1);
    return 0;
}
