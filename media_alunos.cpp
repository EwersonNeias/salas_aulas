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

    // Variáveis para armazenar o maior e menor número de alunos e seus respectivos índices
    int max = 0, min = pessoas[0], max_idx = 1, min_idx = 1;

    // Loop para encontrar a sala com o maior e menor número de alunos
    for (int i = 0; i < n; i++) {
        if (pessoas[i] > max) {
            max = pessoas[i];
            max_idx = i+1;
        } 
        if (pessoas[i] < min) {
            min = pessoas[i];
            min_idx = i+1;
        }
    }

    // Saída da sala com o maior número de alunos para a tela
    cout << "Sala com maior numero de alunos: " << max_idx << endl;

    // Saída da sala com o menor número de alunos para a tela
    cout << "Sala com menor numero de alunos: " << min_idx << endl;

    return 0;
}
