/*
Faça um programa que leia 2 valores inteiros e uma das
seguintes operações a serem executadas (codificada da
seguinte forma: 1.Adição, 2.Subtração, 3.Divisão,
4.Multiplicação). Calcular e escrever o resultado dessao
peração sobre os dois valores lidos.
*/
#include <stdio.h>
int main () {
    printf("Digite dois numeros: ");
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("1. Adicao\n2.Subtracao\n3.Divisao\n4.Multiplicacao");
    printf("\nEscolha uma das opcoes acima, ex: (1)\nOpcao: ");    
    int opcao;
    scanf("%d", &opcao);
    int resultado;
    switch (opcao)
    {
    case 1:
        resultado = n1 + n2;
        break;
    case 2: 
        resultado = n1 - n2;
        break;
    case 3:
        resultado = n1 / n2;
        break;
    case 4:
        resultado = n1 * n2;
        break;
    default:
        printf("opcao invalida.\n");
        break;
    }
    printf("%d", resultado);
}