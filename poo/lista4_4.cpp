\ Questão 1: Escreva um programa que cria um vetor vet (do tamanho que você 
preferir) e preenche o vetor com inteiros \

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Entre com o tamanho do vetor: ";
    std::cin >> n;

    std::vector<int> vet(n); 

    for (int i = 0; i < n; ++i) {
        std::cout << "Digite o valor para a posição " << i << ": ";
        std::cin >> vet[i];
    }

    std::cout << "Valores no vetor: ";
    for (int i = 0; i < n; ++i) {
        std::cout << vet[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
