#include <iostream>
using namespace std;

int main() {
    // Definição do número de salas
    const int n = 6;

    // Array com o número de pessoas em cada sala
    int pessoas[n] = {35, 4, 22, 20, 36, 30};

    // Variável para armazenar a soma total de pessoas
    int soma = 0;

    // Loop para somar o número de pessoas em todas as salas
    for (int i = 0; i < n; i++) {
        soma += pessoas[i];
    }

    // Cálculo da média de pessoas por sala
    double media = soma / n;

    // Saída da média para a tela
    cout << "Media de pessoas por sala: " << media << endl;

    // Saída das salas com número de pessoas acima da média
    cout << "Salas com numero de pessoas acima da media: ";

    // Loop para verificar quais salas têm número de pessoas acima da média
    for (int i = 0; i < n; i++) {
        if (pessoas[i] > media) {
            cout << i+1 << ";";
        }
    }

    cout << endl;

    return 0;
}