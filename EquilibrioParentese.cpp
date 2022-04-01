/*
Verificação de equilibrio de parenteses
*/


#include <iostream>
#include <string.h>

#define VET 20

using namespace std;

struct var{
  char inserir[20];
  int par_d = 0, par_e = 0;
  int cima, i;
};

int main(){
  setlocale( LC_ALL, "" );

  var pi;
  pi.cima = -1;
  pi.i = 0;
  
  cout << "Insira a equação\n";
  cin >> pi.inserir;

  for(int j = 0;j < pi.inserir[j] != '\0'; j++){
    if(pi.inserir[j] == '('){
      pi.par_d++;
    }
    if(pi.inserir[j] == ')'){
      pi.par_e++;
    }
  }

  if(pi.par_d != pi.par_e){
    if(pi.cima < VET - 1){
      pi.cima++;
    }
    cout << "Faltou fechar algum parênteses.\n";
  } else{
      pi.cima--;
    cout << "Os parênteses estão certos\n";
  }
  
  return 0;
}
