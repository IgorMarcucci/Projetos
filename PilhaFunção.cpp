/*
Implementação de pilha com função
*/

#include <iostream>

using namespace std;
#define FIM 10

void add(int &topo1, int &valor1, int vet1[FIM]);

void remove(int &topo2);

void imprimir(int &topo3, int vet3[FIM]);

int main() {
  int tipo = 0, valor = 0, topo = -1, vet[FIM];

  do{
    
    cout << "------------ PILHA ------------\n";
    cout << "Que operação deseja fazer?\n";
    cout << "(1)Adicionar um valor\n";
    cout << "(2)Retirar um valor\n";
    cout << "(3)Revisar Pilha\n";
    cout << "(99)Sair\n";
    cin >> tipo;

    switch(tipo){

      case 1:

        add(topo, valor, vet);


      break;

      case 2:

        remove(topo);

      break;
          
    
      case 3:
      
        imprimir(topo, vet);
      
      break;

    }
  
  } while(tipo != 99);
  
    cout << "Saindo do Sistema...\n";
  
  return 0;

}

void imprimir(int &topo3, int vet3[FIM]){

  if (topo3 < 0){

    cout << "Não há números para imprimir...\n";

  } else

    cout << "Imprimindo pilha...\n";
    for(int i = 0; i <= topo3; i++){

      cout << vet3[i] << "\n";

    }
    
}

void remove(int &topo2){

  if (topo2 < 0){

    cout << "Não há números para remover\n";

  } else

    topo2--;
    cout << "O último valor foi removido...\n";
  
}

void add(int &topo1, int &valor1, int vet1[FIM]){

  if(topo1 > FIM - 1){

    cout << "A pilha está cheia...\n";

  } else

    topo1++;
    cout << "Qual valor deseja adicionar?\n";
    cin >> valor1;
    vet1[topo1] = valor1;
    cout << "O número " << valor1 << " foi adicionado...\n";

} 
