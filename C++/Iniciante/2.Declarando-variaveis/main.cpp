#include <iostream>

int main () {
    int idade = 19;
    float peso = 65.5f;
    double pi = 3.1415;
    char sexo = 'M';
    bool isRaining = true;
    
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "peso: " << peso << std::endl;
    std::cout << "Valor de pi: " << pi << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << "Esta chovendo: " << isRaining << std::endl;

    std::cout << "----------------" << std::endl;
    std::cout << "Idade: " << idade + 10 << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "peso: " << peso + 3.005f << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Valor de pi: " << pi + 2.8754<< std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Esta chovendo: " << !isRaining << std::endl;

    return 0;
}