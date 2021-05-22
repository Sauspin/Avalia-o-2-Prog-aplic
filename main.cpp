#include <iostream>
 
 using namespace std;

int main() {

string msg;
string *pontMsg;
char l1;
char l2;

cout << "Digite a mensagem" << endl;
 cin >> msg;

 cout << "Letra que será substituida" << endl;
  cin >> l1;

  cout << "Letra que vai no lugar da original" << endl;
   cin >> l2;

  cout << msg << endl;
  cout << l1 << endl;
  cout << l2 << endl;
}