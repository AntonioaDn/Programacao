#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
// Criar uma função para tirar os '\n' das strings e evitar problemas:
void retirabarran(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '\n')
        {
            string[i] = '\0';
        }
    }
}
// Começar criando o cadastro dos clientes:
// - Clientes (número do telefone, nome do cliente, endereço, complemento, CEP)
typedef struct
{
    char numerodetelefone[15];
    char nomedocliente[100];
    char endereco[100];
    char complemento[100];
    int cep;
} tcliente;
// Função para cadastrar determinado cliente:
void cadastracliente(tcliente *clientea)
{
    printf("Digite o numero de telefone do cliente, sem espacos ou tracos: \n");
    fgets(clientea->numerodetelefone, 15, stdin);
    retirabarran(clientea->numerodetelefone);
    printf("Digite o Nome do cliente: \n");
    fgets(clientea->nomedocliente, 100, stdin);
    retirabarran(clientea->nomedocliente);
    printf("Digite o endereco: \n");
    fgets(clientea->endereco, 100, stdin);
    retirabarran(clientea->endereco);
    printf("Digite o complemento do endereco: \n");
    fgets(clientea->complemento, 100, stdin);
    retirabarran(clientea->complemento);
    printf("Digite o cep do cliente: \n");
    scanf("%d", &clientea->cep);
    getchar();
    printf("Cliente cadastrado com sucesso.\n");
}
// A parte de cadastrar clientes está pronta, vamos para a de cadastrar pizzas:
// - Pizzas (código da pizza, nome da pizza, valor);
typedef struct
{
    int codigodapizza;
    char nomedapizza[100];
    float valordapizza;
} tpizza;
void cadastrapizzas(tpizza *pizzaa)
{
    printf("Digite o codigo da pizza: ");
    scanf("%d", &pizzaa->codigodapizza);
    getchar();
    printf("Digite nome da pizza: \n");
    fgets(pizzaa->nomedapizza, 100, stdin);
    retirabarran(pizzaa->nomedapizza);
    printf("Digite valor da pizza: ");
    scanf("%f", &pizzaa->valordapizza);
    getchar();
}
// A parte de cadastrar pizzas está pronta, vamos para a de cadastrar pedidos:
// - Pedido (número do pedido, número do telefone, código da pizza, código do motoqueiro, situação)
// É possível criar uma enum com as possíveis situações do pedido:
enum situacao
{
    empreparo,
    acaminho,
    entregue
};
typedef struct
{
    int numerodopedido;
    char numerodetelefone[15];
    int codigodapizza;
    int codigodomotoqueiro;
    enum situacao situacaodopedido;
} tpedido;
void cadastrapedidos (tpedido *pedidoa, tpizza pizzas[]) {
    printf("Digite o numero do pedido: ");
    scanf("%d", &pedidoa->numerodopedido);
    getchar();
    printf("\nDigite o numero do telefone: \n");
    fgets(pedidoa->numerodetelefone, 15, stdin);
    retirabarran(pedidoa->numerodetelefone);
    while (1) {
        int parada=0;
        printf("Digite um codigo de pizza valido: ");
        scanf("%d", &pedidoa->codigodapizza);
        for (int i=0; i<3; i++) {
            if (pedidoa->codigodapizza == pizzas[i].codigodapizza) {
                parada = 1;
                break;
            }
            if (i == 2 && pedidoa->codigodapizza != pizzas[i].codigodapizza) {
                printf("\nCodigo nao encontrado.\n");
                continue;
            }

        }
        if (parada == 1) {
            break;
        }
        
    }
    pedidoa->situacaodopedido = empreparo;
    pedidoa->codigodomotoqueiro = -1;
}
// A parte do cadastro dos pedidos está correta, agora vamos para o codigo de despacho:
void despachapizzas (tpedido pedidos[], int total) {
    tpedido *ponteiro;
    srand(time(NULL));
    int codigo;
    printf("Digite o codigo do pedido que quer despachar: ");
    scanf("%d", &codigo);
    getchar();
    for (int i=0; i<total; i++) {
        if (pedidos[i].numerodopedido == codigo && pedidos[i].situacaodopedido == empreparo) {
            ponteiro = &pedidos[i];
            pedidos[i].codigodomotoqueiro = (rand()%99)+1;
            printf("\nO pedido de codigo %d saiu para entrega, o codigo do motoqueiro eh: %d.\n", ponteiro->numerodopedido, pedidos[i].codigodomotoqueiro);
            ponteiro->situacaodopedido = acaminho;
            break;
        }
        if (pedidos[i].numerodopedido == codigo && pedidos[i].situacaodopedido == acaminho) {
            printf("Essa pizza ja foi despachada.\n");
            break;
        }
        if (i == total-1 && pedidos[i].numerodopedido != codigo) {
            printf("O pedido nao foi encontrado.\n");
            break;
        }
    }
} 
// A parte do despacho está pronta, vamos para a entrega:
void entregapizzas (tpedido pedidos[], int total) {
    int codigo;
    printf("Digite o codigo do pedido que ja foi recebido: ");
    scanf("%d", &codigo);
    tpedido *ponteiro;
    for (int i=0; i<total; i++) {
        if (pedidos[i].numerodopedido == codigo && pedidos[i].situacaodopedido == acaminho) {
            ponteiro = &pedidos[i];
            ponteiro->situacaodopedido = entregue;
            printf("O pedido de codigo %d foi recebido com sucesso.\n", pedidos[i].numerodopedido);
            break;
        }
        if (pedidos[i].numerodopedido == codigo && pedidos[i].situacaodopedido == empreparo) {
            printf("A pizza ainda nao foi despachada.\n");
            break;
        }
        if (i == total-1 && pedidos[i].numerodopedido != codigo) {
            printf("O codigo do pedido nao foi encontrado\n");
            break;
        }
    }
}
// A parte da entrega está pronta, agora vamos para a função que mostra todas as pizzas que já foram entregues:
void mostrapizzasentregues (tpedido pedidos[], tpizza pizzas[], tcliente clientes[], int totalpedidos, int totalpizzas, int totalclientes) {
// Armazenar as informações dos pedidos que já foram entregues, como o numero do pedido e o código da pizza:
    typedef struct {
        tpedido infpedido;
        tpizza infpizza;
    } tpedidosentregues;
    int pedidosentregues=0;
    for (int i=0; i<totalpedidos; i++) {
        if (pedidos[i].situacaodopedido == entregue) {
            pedidosentregues++;
        }
    }
    if (pedidosentregues == 0) {
        printf("Nenhum pedido foi entregue ainda.\n");
    }
    tpedidosentregues v[pedidosentregues];
    int c1=0;
    for (int i=0; i<totalpedidos; i++) {
        if (pedidos[i].situacaodopedido == entregue) {
            v[c1].infpedido = pedidos[i];
            for (int j=0; j<totalpizzas; j++) {
                if (v[c1].infpedido.codigodapizza == pizzas[j].codigodapizza) {
                    v[c1].infpizza = pizzas[j];
                }
            }
            c1++;
        }
    }
    for (int i=0; i<pedidosentregues; i++) {
        printf("\nO pedido de uma pizza %s, de codigo %d, no valor de %f ja foi entregue.\n", v[i].infpizza.nomedapizza, v[i].infpedido.numerodopedido, v[i].infpizza.valordapizza);
    }
}
void mostralinhas () {
    for (int i=0; i<51; i++) {
        printf("-");
    }
    printf("\n");
}
// Teste na main agora:
int main()
{
    tcliente clientes[5];
    tpizza pizzas[3];
    tpedido pedidos[6];
    int icl=0, ipi=0, ipe=0, pedidosdespachados=0, pedidosentregues=0;
    int opcao=100;
    while (opcao != 0) {
        mostralinhas();
        printf("1. Cadastrar clientes\n2. Cadastrar pizza\n3. Cadastrar pedido\n4. Despachar pizza\n5. Receber pizza\n6. Mostrar todas as pizzas entregues\n0. Sair do programa\nOpcao = ");
        scanf("%d", &opcao);
        getchar();
        if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 0) {
            printf("Opcao invalida.\n");
            continue;
        }
        mostralinhas();
        if (opcao == 1) {
            if (icl >= 5) {
                printf("Numero maximo de clientes cadastrados.\n");
                continue;
            }
            cadastracliente(&clientes[icl]);
            icl++;
            continue;
        }
        if (opcao == 2) {
            if (ipi >= 3) {
                printf("Numero maximo de pizzas cadastradas.\n");
                continue;
            }
            cadastrapizzas(&pizzas[ipi]);
            ipi++;
            continue;
        }
        if (opcao == 3) {
            if (ipi == 0) {
                printf("Nenhuma pizza foi cadastrada, entao nao e possivel fazer um pedido.\n");
                continue;
            }
            if (ipe >= 6) {
                printf("Numero maximo de pedidos cadastrados.\n");
                continue;
            }
            cadastrapedidos(&pedidos[ipe], pizzas);
            ipe++;
            continue;
        }
        if (opcao == 4) {
            if (ipe == 0) {
                printf("Nenhum pedido foi cadastrado, entao nao e possivel despachar.\n");
                continue;
            }
            despachapizzas(pedidos, 5);
            pedidosdespachados++;
            continue;
        }
        if (opcao == 5) {
            if (ipe == 0) {
                printf("Nenhum pedido foi cadastrado, nao e possivel entregar.\n");
                continue;
            }
            entregapizzas(pedidos, 6);
            pedidosentregues++;
        }
        if (opcao == 6) {
            mostrapizzasentregues(pedidos, pizzas, clientes, 6, 3, 5);
        }
    } 
    return 0;
} 