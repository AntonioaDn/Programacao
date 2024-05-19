#include <stdio.h>
#include <stdlib.h>
/*Programa recebe: n° de horas trabalhadas; valor do salário mínimo; n° de horas extras trabalhadas
Programa mostra: Salário a receber;
Considerações: a hora trabalhada vale 1/8 do salário mínimo; a hora extra vale 1/4; o salário bruto equivale ao número de horas
trabalhadas vezes o valor da hora trabalhada; o salario a receber e o salario bruto mais as horas extras
*/
int main()
{
    float horasTrab, valorSalario, horasExtras, valorHoraTrab, valorHoraExtra, salarioBruto, salarioTotal, salarioExtra;

    printf("Valor do salario min.: ");
    scanf("%f", &valorSalario);

    printf("Qtd de horas trab.: ");
    scanf("%f", &horasTrab);

    printf("Qtd de horas extras: ");
    scanf("%f", &horasExtras);

    valorHoraTrab = valorSalario/8;
    valorHoraExtra = valorSalario/4;
    salarioBruto = horasTrab*valorHoraTrab;
    salarioExtra = horasExtras*valorHoraExtra;
    salarioTotal = salarioBruto+salarioExtra;

    printf("O salario a receber sera: R$%.2f", salarioTotal);

    return 0;
}
