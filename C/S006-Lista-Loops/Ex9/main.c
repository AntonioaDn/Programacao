#include <stdio.h>
#include <stdlib.h>
/*
9. A Energisa est� interessada em um relat�rio contendo:
a) Quantidade total de pulsos residenciais consumidos;
b) Quantidade total de pulsos comerciais consumidos;
c) O c�digo do assinante que consumiu o maior n�mero de pulsos residenciais;
d) A m�dia de pulsos comerciais consumidos.
Escreva um programa que leia os dados dos assinantes (c�digo do assinante, quantidade
de pulsos consumidos e a categoria: 1- para residencial e 2- para comercial), e gere o
relat�rio com as informa��es desejadas acima. O final do conjunto de assinantes � dado
por um c�digo de assinante igual a zero.
*/
int main() {
    int categoria, codigo, maiorConsumidor, i;
    float pulsosCosumidos, pulsosResidenciais, pulsosComerciais, media, maiorPulso;
    pulsosComerciais == 0;
    pulsosResidenciais == 0;
    i == 0;
    maiorPulso == 0;
//receber do usuario o codigo, qtd de pulsos e a categoria
    printf("Categorias de clientes: Residenciais (1), Comerciais (2)\n");
    printf("Digite o codigo do cliente, qtd de pulsos consumidos e a categoria, \nde acordo com a descricao acima: ");
    scanf("%d %f %d", &codigo, &pulsosCosumidos, &categoria);

    while (categoria != 1 && categoria != 2) {
        printf("Categoria invalida, digite (1) para residencial e (2) para comercil: ");
        scanf("%d", &categoria);
    }
    maiorConsumidor = codigo;
    maiorPulso = pulsosCosumidos;

    while (categoria != 0) {
        if (pulsosCosumidos > maiorPulso) {
            maiorPulso = pulsosCosumidos;
            maiorConsumidor = codigo;
        }
        if (categoria == 1) {
            pulsosResidenciais += pulsosCosumidos;
        }
        if (categoria == 2) {
            pulsosComerciais += pulsosCosumidos;
//para a media de pulsos comerciais basta dividir a soma pela quantidade
            i += 1;
        }
        printf("Digite o codigo do cliente, qtd de pulsos consumidos e a categoria\n, de acordo com a descricao acima: ");
        scanf("%d %f %d", &codigo, &pulsosCosumidos, &categoria);
        while (categoria != 1 && categoria != 2 && categoria != 0) {
        printf("Categoria invalida, digite (1) para residencial e (2) para comercil: ");
        scanf("%d", &categoria);
        }
    }
    media = pulsosComerciais / i;
    printf("A quantidade total de pulsos comerciais foi de %.2f\n", pulsosComerciais);
    printf("A quantidade total de pulsos residenciais foi de %.2f\n", pulsosResidenciais);
    printf("A media de pulsos comerciais consumidos foi de %.2f\n", media);
    printf("O codigo do maior consumidor foi %d", maiorConsumidor);

    return 0;
}
