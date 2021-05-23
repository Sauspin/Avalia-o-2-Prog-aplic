#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 using namespace std;
int fazendo_troca(int tam, string *pontMsg, string *pontMsg2, int letra1, int letra2){

    int troca = 0;

     for (int i=0; i < tam; i++)
       {
         if ((*pontMsg)[i]==letra1)
         {
          (*pontMsg2)[i] = letra2;
           troca++;
           cout << troca <<endl;
         }

       }

    return troca;
}
int main() {


    string msg, msg2;
    string *pontMsg = &msg;
    string *pontMsg2 = &msg2;

    char letra1;
    char letra2;

    cout << "Digite a mensagem" << endl;
    cin >> msg;
    msg2 = msg;

    cout << "Letra que sera substituida" << endl;
    cin >> letra1;

    cout << "Letra que vai no lugar da original" << endl;
    cin >> letra2;


    int tam = msg.size();

    int qtdTrocas = fazendo_troca(tam, pontMsg, pontMsg2, letra1, letra2);


    /*cout << "Entrada" << endl;
    cout << k1 << endl;
    cout << l1 << endl;
    cout << l2 << endl;*/
    cout << "Saida" << endl;
    cout << msg2 << endl;
    cout << msg << endl;
    cout << qtdTrocas;
}