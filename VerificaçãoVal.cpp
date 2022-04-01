/*
Verificação de números primos ou multiplos de 3
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

  int numeros, total, i, primo, mult;
  char continuar;
  string totalp;

  primo = 0;
  mult = 0;

  // Atribuição de repetição para o armazenamento de cada número:

  do {

    total = 0;

    cout << "Digite um número: ";
    cin >> numeros;

    // Condição para caso o número seja primo:

    if (numeros % 3 == 0) {
        mult++;
      
    }

    for (i = 2; i <= numeros / 2; i++) {
      if (numeros % i == 0) {
        total++;
        break;
      }
    }

    if (total == 0) {
      primo++;
      cout << "O número " << numeros << " é um número primo. " << endl;
      totalp += to_string(numeros) + " ";
      cout << "Total de números primos: " << primo << endl;

    }
    else
      cout << "O número " << numeros << " não é primo " << endl;

    cout << "Deseja continuar? (S) ou (N) ";
    cin >> continuar;

  } while (continuar == 'S' | continuar == 's');

  // Considerações finais: 

  cout << "Os números " << totalp << " são primos." << endl;
  cout << "Total: " << primo << " números primos." << endl;
  cout << "Total: " << mult << " multiplos de 3." << endl;

  return 0;

}
