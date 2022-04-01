/*

Código de inserção de números no qual o código irá armazenar e exibir em ordem crescente

*/

#include <iostream>

using namespace std;

int main() {
  int num[10], i, vet, comp;

  for (i = 0; i < 10; i++) {
    cout << "Insira um número. " << endl;
    cin >> num[i];
  
  }

  for (i = 0; i < 10; i++){
    for (vet = i + 1; vet < 10; vet++){
      if (num[i] > num[vet]){
        comp = num[i];
        num[i] = num[vet];
        num[vet] = comp;
      }
    }
  }

  cout << "Valores em ordem crescente: " << endl;
  for (i = 0; i < 10; i++){
    cout << num[i] << endl;
  }

  return 0;

}
