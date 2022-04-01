/*
Implementação de lista
*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
  int continuar = 0, local = 0, vetor[10], last = -1, i = 0;

    do {

      system("cls");
      cout << endl;
      cout << "- MENU DA LISTA -\n";
      cout << "Selecione uma opção\n";
      cout << "1 = Inserir\n";
      cout << "2 = Remover\n";
      cout << "3 = Imprimir\n";
      cout << "9 = Sair\n";
      cin >> continuar;

      switch(continuar) {

        case 1:

          system("cls");
          if(last > 10 - 1){
            cout << "A lista está cheia!!!\n";
            
          } else 
              cout << "Em qual lugar deseja inserir?\n";
              cout << "Escolha entre 0 a " << last + 1 << ".\n";
              cin >> local;

              if(last + 1 < local){
                cout << "Não é possível inserir nessa posição\n";

                return 0;

              } else
                  for(i = last; i >= local; i--)
                    vetor[i+1] = vetor[i];

                  cout << "Qual número deseja inserir?\n";
                  cin >> vetor[local];
                  last++;

                  cout << "Número inserido:\n";
                  cout << vetor[local] << endl;


        break;

        case 2:

          system("cls");
          if(last < 0){
            cout << "Não há o que remover, a lista está vazia\n";
            
          } else
              cout << "Em qual lugar deseja retirar?\n";
              cout << "Escolha entre 0 a " << last << ".\n";
              cin >> local;

              if(last < local){
                cout << "Não dá para retirar desse lugar\n";
                
              } else
                  cout << "Número retirado:\n";
                  cout << vetor[local] << endl;
                  for(i = local; i < last; i++)
                    vetor[i] = vetor[i + 1];
                    last--;
          
        break;

        case 3:

          system("cls");
          cout << "Imprimindo lista...\n";
          if(last < 0){
            system("cls");
            cout << "Não há o que imprimir, a lista está vázia\n";
              
          } else
              for(i = 0; i <= last; i++)
                cout << vetor[i] << "\n";

              
        break;        

        case 9:
        
          return 0;
      }

    } while(continuar != 9);

  return 0;

}
