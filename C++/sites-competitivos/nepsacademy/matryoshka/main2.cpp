#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> bonecas(N);
    for (int i = 0; i < N; i++) {
        std::cin >> bonecas[i];
    }

    std::vector<int> bonecas_ordenadas = bonecas;
    std::sort(bonecas_ordenadas.begin(), bonecas_ordenadas.end());

    std::vector<int> recolhidos;
    for (int i = 0; i < N; i++) {
        if (bonecas[i] != bonecas_ordenadas[i]) {
            recolhidos.push_back(bonecas[i]);
        }
    }

    std::sort(recolhidos.begin(), recolhidos.end());

    std::cout << recolhidos.size() << std::endl;
    for (int boneca : recolhidos) {
        std::cout << boneca << " ";
    }

    return 0;
}