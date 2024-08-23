#include <bits/stdc++.h>

using namespace std;

int main () {
    // Primeira ideia: receber os dados e ja calcular a soma de cada linha/coluna
    // Assim como cada maior elemento
    int n;
    cin >> n;
    int matriz[n][n], soma_linha[n] = {0}, soma_coluna[n] = {0}, maior_linha[n] = {0}, maior_coluna[n] = {0};
    int linha_maior=0, coluna_maior=0, maior_soma=0;
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            int entrada;
            cin >> entrada;
            matriz[i][j] = entrada;
            soma_linha[i] += entrada;
            soma_coluna[j] += entrada;
            if (maior_linha[i] < entrada) maior_linha[i] = entrada;
            if (maior_coluna[j] < entrada) maior_linha[j] = entrada;
        }
    }
    // Agora basta encontrar a maior combinacao de linha e coluna
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            if (maior_soma < soma_linha[i]+soma_coluna[j]-(2 * matriz[i][j])) {
                maior_soma = soma_linha[i]+soma_coluna[j]-(2 * matriz[i][j]);
            }
        }
    }
    cout << maior_soma << endl;
}