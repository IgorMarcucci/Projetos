/*
Implementação de pilha utilizando struct
*/

#include <iostream>
#include <locale>

#define VET 5
using namespace std;

struct pilha{
  int continuar, vetor[VET], cima, i, inserir;
};

int main() {
    
  pilha pi;

  pi.cima = -1;

  do{

    system("cls");
    cout << endl;
    cout << "- MENU DA PILHA -" << endl;
    cout << "Selecione uma opção:" << endl;
    cout << "1 = Inserir" << endl;
    cout << "2 = Remover" << endl;
    cout << "3 = Imprimir" << endl;
    cout << "9 = Sair" << endl;
    cin >> pi.inserir;

    switch(pi.inserir){

      case 1:

        system("cls");
        cout << endl;
        cout << "Digite o número que deseja inserir:" << endl;
        cin >> pi.inserir;
        system("pause");

        if(pi.cima < VET - 1){
          pi.cima++;
          pi.vetor[pi.cima] = pi.inserir;
        }

      break;

      case 2:

        system("cls");
        cout << endl;
        cout << "Removendo o último número inserido!" << endl;
        pi.cima--;
        system("pause");
      
      break;

      case 3:

        system("cls");
        cout << "Imprimindo vetor! " << endl;
        for(pi.i = 0;pi.i <= pi.cima; pi.i++){
          cout << pi.vetor[pi.i] << "\n";
        }
        cout << endl;
        system("pause");

      break;

      case 9:

        cout << "Saindo";

      return 0;

    }

  }while (pi.continuar != 9);

  return 0;

}