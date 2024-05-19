/*
Escreva um programa que calcule o Valor a Pagar pela conta
de energia elétrica para uma determinada Classe
Consumidora. Veja as informações a seguir:
a) O programa deve receber como dados de entrada: o tipo da
Classe Consumidora, (conforme definido na Tabela 1) e o
Consumo em quilowatts/hora (KWh);
b) O cálculo do Valor do Fornecimento (VF), em Reais (R$), é
definido pela seguinte fórmula: VF = Consumo x Tarifa, onde a
tarifa é definida na Tabela 1, conforme a classe consumidora;
c) O Valor a Pagar (VP) é definido pela seguinte fórmula: VP = VF +
ICMS, onde a taxa de ICMS é calculada aplicando uma
alíquota de 30% ao valor do fornecimento (ICMS = 0.3 x VF).
Classe Consumidora Tarifa (R$)
A 0.5
B 0.8
C 1.0
*/
#include <stdio.h>
int main () {
    char tipo;
    float kWh, vf, vp;
    printf("A -> 0.5\nB -> 0.8\nC -> 1.0\nDigite qual a tarifa da classe: ");
    scanf("%c", &tipo);
    getchar();
    printf("Digite o consumo em kWh: ");
    scanf("%f", &kWh);
    switch(tipo) {
        case 'A':
            vf = kWh * 0.5;
            vp = vf * 1.3;
            break;
        case 'B':
            vf = kWh * 0.8;
            vp = vf * 1.3;
            break;
        case 'C':
            vf = kWh;
            vp = vf * 1.3;
            break;
        default:
            printf("Opcao invalida.\n");
    }
    printf("O valor a pagar e de: %d\nFoi aplicada a tarifa %c", vp, tipo);
}