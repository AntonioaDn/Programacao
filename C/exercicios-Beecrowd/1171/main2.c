#include <stdio.h>

int main() {
    int testes;
    scanf("%d", &testes);
    
    int ar[testes];
    int contador[testes]; 
    int k[testes]; 

    for (int i = 0; i < testes; i++) {
        contador[i] = 0;
        k[i] = 0;
    }

    for (int i = 0; i < testes; i++) {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < testes; i++) {
        if (k[i] == 0) { 
            for (int j = 0; j < testes; j++) {
                if (ar[i] == ar[j]) {
                    contador[i]++;
                    k[j] = 1; 
                }
            }
        }
    }

    // Ordenando os vetores ar e contador
    for (int i = 0; i < testes-1; i++) {
        for (int j = 0; j < testes-1; j++) {
            if (ar[j] > ar[j+1]) {
                // Trocar ar[j] e ar[j+1]
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
                
                // Trocar contador[j] e contador[j+1]
                temp = contador[j];
                contador[j] = contador[j+1];
                contador[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < testes; i++) {
        if (contador[i] > 0) {
            printf("%d aparece %d vez(es)\n", ar[i], contador[i]);
        }
    }
    return 0;
}