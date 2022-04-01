#include <iostream>
#include <locale>

#define VET 5
using namespace std;

int main() {
  setlocale( LC_ALL, "" );
  int continuar = 0, vetor[VET], cima = -1, i = 0, inserir = 0;

    do {

      system("cls");
      cout << endl;
      cout << "- MENU DA FILA -" << endl;
      cout << "Selecione uma opção:" << endl;
      cout << "1 = Inserir" << endl;
      cout << "2 = Remover" << endl;
      cout << "3 = Imprimir" << endl;
      cout << "9 = Sair" << endl;
      cin >> continuar;

      switch(continuar) {

          case 1:

            system("cls");
            
            if(cima < VET - 1){
              cima++;
              cout << endl;
              cout << "Digite o número que deseja inserir:" << endl;
              cin >> inserir;
              vetor[cima] = inserir;
            } else
              cout << "A fila está cheia!" << endl;

            system("pause");

          break;

          case 2:

            system("cls");
            cout << "Numero " << vetor[0] << " removido." << endl;

            if(cima >= 0){
              for(i = 0; i < cima; i++){
                vetor[i] = vetor[i + 1];
              }
              cima--;
            } else
              cout << "Não há mais números para remover!" << endl;

            system("pause");

            break;

          case 3:

            system("cls");
            cout << "Imprimindo fila! " << endl;

            if(cima >= 0) {
              for(i = 0;i <= cima; i++){
                cout << vetor[i] << " ";
              }
              cout << endl;              
            } else 
              cout << "Não há mais números na fila" << endl;

            system("pause");
            
            break;
          case 9:
            cout << "Saindo";
            return 0;
      }

    } while(continuar != 9);

  return 0;

}