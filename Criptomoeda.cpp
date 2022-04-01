/*
Código que por meio da criptomoeda inserida e seus valores, irá retornar as criptomoedas em alta e as criptomoedas em baixa.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

  // Distribuição de variáveis:

  int exit;
  float var1, var2, varG, dia1, dia2, dia3, vAlt, vBaix, aux;
  string crip, alt, baix;

  // Atrtibuição de valor à uma variável:

  exit = 'n';
  
  // Atribuição do preço da cripto para cada dia de comparação.
  
  cout << "Insira o nome da criptomoeda: " << endl;
  cin >> crip;

  cout << "Insira o valor do primeiro dia: " << endl;
  cin >> dia1;

  cout << "Insira o valor do segundo dia: " << endl;
  cin >> dia2;

  cout << "Insira o valor do terceiro dia: " << endl;
  cin >> dia3;

  // Calculando a variação de acordo com os valores informados a cada dia:

  cout << fixed << setprecision(2);
  var1 = dia2 - dia1;
  var2 = dia3 - dia2;
  varG = dia3 - dia1;
  vBaix = varG;
  vAlt = varG;
  alt = crip;
  baix = crip;

  cout << endl;

  // Repetição para que a operação se repita até o cliente decidir não calcular mais.

  do {

    // Uso do if para a atribuição da comparação dos preços entre cada dia.

    if (var1 > 0) {

      cout << endl;
      cout << "A cripto " << crip << " esteve em alta do dia 1 para o dia 2." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação foi de: " << var1 << "R$" << endl;

    } 
    else {

      cout << "A cripto " << crip << " esteve em baixa do dia 1 para o dia 2." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação foi de: " << var1 << "R$" << endl;

    }
    
    if (var2 > 0) {
      cout << endl;
      cout << "A cripto " << crip << " esteve em alta do dia 2 para o dia 3." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação foi de: " << var2 << "R$" << endl;

    } 
    else {

      cout << endl;
      cout << "A cripto " << crip << " esteve em baixa do dia 2 para o dia 3." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação foi de: " << var2 << "R$" << endl;

    }
    
    if (varG > 0) {

      cout << endl;
      cout << "A cripto " << crip << " esteve em alta do dia 1 para o dia 3." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação foi de: " << varG << "R$" << endl;

    } 
    else {

      cout << endl;
      cout << "A cripto " << crip << " esteve em baixa do dia 1 para o dia 3." << endl;
      cout << "----------------------------------" << endl;
      cout << "A variação geral foi de: " << varG << "R$" << endl;

    }
      
    cout << endl;
    cout << "Deseja continuar a operação? " << endl;
    cout << "(1) = Sim." << endl;
    cout << "(2) = Não." << endl;
    cout << "(3) = Cancelar." << endl;
    cin >> exit;
    
    if (exit == 2) {
      break;
    }
    else if (exit == 3) {
      return 0;
    }

    cout << endl;
    cout << "Insira o nome da criptomoeda: " << endl;
    cin >> crip;
  
		cout << "Insira o valor do primeiro dia: " << endl;
    cin >> dia1;

    cout << "Insira o valor do segundo dia: " << endl;
    cin >> dia2;

    cout << "Insira o valor do terceiro dia: " << endl;
    cin >> dia3;

    // Calculando a variação de acordo com os valores informados a cada dia:

    cout << fixed << setprecision(2);
    var1 = dia2 - dia1;
    var2 = dia3 - dia2;
    varG = dia3 - dia1;

    // Atribuição do preço maior ou menor e da variação maior ou menor para cada cripto inserida.

    if (varG > vAlt) {

      vAlt = varG;
      alt = crip;

    }
    
    if (varG < vBaix) {

      vBaix = varG;
      baix = crip;

    }
    
    cout << endl;
    
  } while (exit == 1);

    // Consideração final.

    cout << "A criptomoeda que obteve a maior alta foi: " <<  alt << " com uma variação de: " << vAlt << endl;
    cout << "----------------------------------------" << endl;
    cout << "A criptomoeda que obteve a maior baixa foi: " << baix << " com uma variação de: " << vBaix << endl;

  return 0;

}
