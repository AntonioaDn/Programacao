/*
Escreva um programa que receba o código correspondente
ao cargo de um funcionário e seu salário atual. Calcule e
mostre o cargo, o valor do aumento e seu novo salário. Os
cargos estão na tabela a seguir.
Código Cargo Percentual
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor Não tem aumento
*/
#include <stdio.h>
int main () {
    int codigo;
    printf("1. Escriturario\n2. Secretario\n3. Caixa\n");
    printf("4. Gerente\n5. Diretor\nOpcao: ");
    scanf("%d", &codigo);
    float salario;
    printf("Agora digite o salario do funcionario antes do reajuste: ");
    scanf("%f", &salario);
    float salarioatualizado, aumento, taxa;
    switch(codigo) {
        case 1:
            taxa = 0.5;
            aumento = salario * taxa;
            printf("Cargo: Escriturario.\n");
            printf("O aumento foi de %.3f.\n", aumento);
            salarioatualizado = salario * 1.5;
            break;
        case 2:
            taxa = 0.35;
            aumento = salario * taxa;
            printf("Cargo: Secretario.\n");
            printf("O aumento foi de %.3f.\n", aumento);
            salarioatualizado = salario * 1.35;
            break;
        case 3:
            taxa = 0.2;
            aumento = salario * taxa;
            printf("Cargo: Caixa.\n");
            printf("O aumento foi de %.3f.\n", aumento);
            salarioatualizado = salario * 1.2;
            break;
        case 4:
            taxa = 0.1;
            salarioatualizado = salario * 1.1;
            aumento = salario * taxa;
            printf("Cargo: Gerente.\n");
            printf("Aumento: %.3f\n", aumento);
            break;
        case 5:
            taxa = 0;
            aumento = 0;
            printf("Cargo: Diretor.\n");
            printf("Aumento: 0\n");
            salarioatualizado = salario;
    }
    printf("Salario com reajuste: %.3f\n", salarioatualizado);
    return 0;
}