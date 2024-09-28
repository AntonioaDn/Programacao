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

    // Ordenando os vetores:
    
    
    for (int i=0; i < testes; i++) {
        printf("%d aparece %d vez(es)\n", ar[i], contador[i]);
    }
    return 0;
}