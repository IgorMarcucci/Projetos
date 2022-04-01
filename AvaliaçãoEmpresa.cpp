/*
Uma determinada empresa tinha um processo de avaliação de materiais a serem usados a partir de suas condições de avaliação, o código irá realizar a verificação e retornar se cumpre os requisitos da empresa
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  // Atribuição de variáveis:

  float volume, comp, larg, profund, peso, kg, metro;
  int material;

  // Armazenamento do material no qual será usado:

  cout << "Insira o material: "  << endl;
  cout << "(1) = Vidro. " << endl;
  cout << "(2) = Plástico. " << endl;
  cout << "(3) = Metal. " << endl;
  cin >> material;

  // Armazenamento da medida de cada material:

  cout << "Insira o peso em gramas: " << endl;
  cin >> peso;

  cout << "Insira o comprimento em cm: " << endl;
  cin >> comp; 

  cout << "Insira a largura em cm: " << endl;
  cin >> larg;

  cout << "Insira a profundidade em cm: " << endl;
  cin >> profund;

  // Calculando valores:

  volume = ((comp * larg) * profund);
  kg = peso / 1000;
  metro = profund / 100;

  // Atribuição de condições para cada material:

  if(material == 2) {

    if (kg < 30 || metro < 1 || volume < 50) {
      cout << "Caso 1: A peça passou na avaliação. " << endl;
    }
    else 
      cout << "Caso 1: A peça não passou na avaliação. " << endl;
      
  }

  if(material == 1) {

    if (larg > 25 || kg > 1) {
      cout << "Caso 2: A peça passou na avaliação. " << endl;
    }
    else
      cout << "Caso 2: A peça não passou na avaliação. " << endl;
    

    if (volume > 35 || larg > 25 || profund < 10){
      cout << "Caso 2: A peça passou na avaliação. " << endl;
    }
    else
      cout << "Caso 2: A peça não passou na avaliação. " << endl;
    
  }

  if(material == 3) {

    if (volume < 80 || kg < 100 || comp > 10){
      cout << "Caso 3: A peça passou na avaliação. " << endl;
    }
    else 
      cout << "Caso 3: A peça não passou na avaliação. " << endl;

  } 

  return 0;

}
