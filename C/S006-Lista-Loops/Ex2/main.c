#include <stdio.h>
#include <stdlib.h>
/*2. Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios de acordo com
o n�mero de horas extras e o n�mero de horas que o funcion�rio faltou ao trabalho. O
valor do pr�mio � obtido pela consulta � tabela que se segue, em que:
H = n�mero de horas extras � (2/3 * (n�mero de horas falta));*/
int main()
{
    // declarar as variaveis que serao: horasExtras, horasFalta, H
    float horasExtras, horasFalta, H;
    printf("Digite as horas extras do funcionario: ");
    scanf("%f", &horasExtras);
    printf("Digite as horas que o funcionario faltou: ");
    scanf("%f", &horasFalta);
    H = horasExtras - ((2.0/3) * horasFalta);
    if (H >= 2400) {
        printf("A gatificacao sera de: 500.");
    }
    if (H >= 1800 && H < 2400) {
        printf("A gatificacao sera de 400 reais.");
    }
    if (H >= 1200 && H < 1800) {
        printf("A gatificacao sera de 300 reais.");
    }
    if (H >= 600 && H < 1200) {
        printf("A gatificacao sera de 200 reais.");
    }
    if (H < 600) {
        printf("A gatificacao sera de 100 reais.");
    }
    return 0;
}
