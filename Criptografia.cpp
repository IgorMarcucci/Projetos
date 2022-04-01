#include <cstddef>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 1000

using namespace std;

//Declaração de variáveis...
int tamanho;

//Função para criptografar arquivo...
void Criptografar(){
    char txt[max] = {NULL};
    FILE *arquivo;
    int v = 3;

    arquivo = fopen("texto.txt", "r");

    for(int i = 0; !feof(arquivo); i++){
        txt[i] = fgetc(arquivo) + v;
    }

    fclose(arquivo);

    arquivo = fopen("texto.txt", "w");

    tamanho = strlen(txt);

    for(int i = 0; i < tamanho - 1; i++){
        fputc(txt[i], arquivo);
    }

    fclose(arquivo);

}

void Mostrar_Texto(){
    char txt[max] = {NULL};
    FILE *arquivo;
    arquivo = fopen("texto.txt", "r");

    for(int i = 0; !feof(arquivo); i++){
        txt[i] = fgetc(arquivo);
    }

    cout << "\n" << txt << "\n";

    fclose(arquivo);
}

//Função para descriptografar arquivo...
void Descriptografar(){
    char txt[max] = {NULL};
    FILE *arquivo;
    int u = 3;

    arquivo = fopen("texto.txt", "r");

    for(int i = 0; !feof(arquivo); i++){
        txt[i] = fgetc(arquivo) - u;
    }

    fclose(arquivo);

    arquivo = fopen("texto.txt", "w");

    tamanho = strlen(txt);

    for(int i = 0; i < tamanho - 1; i++){
        fputc(txt[i], arquivo);
    }

    fclose(arquivo);

}

//Função para o menu...
void menu(){

    int inserir;

    do{

        //Repetição para rodar o menu de criptografia
        system("cls");
        cout << "\n\n\n---------MENU---------\n";
        cout << "1 = Criptografar Texto\n";
        cout << "2 = Descriptografar Texto\n";
        cout << "3 = Mostrar Texto\n";
        cout << "4 = Sair\n";
        cin >> inserir;

        switch(inserir){

            case 1:

                system("cls");
                cout << "\n\nCriptografando arquivo...\n\n";
                Criptografar();
                cout << "\n\n\n";

            break;

            case 2:

                system("cls");
                cout << "\n\nDescriptografando arquivo...\n\n";
                Descriptografar();
                cout << "\n\n\n";

            break;

            case 3:
                cout << "\n\nImprimindo texto...\n\n";
                Mostrar_Texto();
		system("pause");
                cout << "\n\n\n";

            break;

            case 4:

                cout << "Finalizando programa...\n";
                system("pause");
                cout << "\n\n\n";

            break;

            default:
                cout << "Arquivo inválido...\n";

        }

    }while(inserir != 4);
}

int main(){

    menu();
    return 0;

}
