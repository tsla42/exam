#include <iostream>
using namespace std;

int main() {
int a, b, c;
char oper, oper2='=';
bool praks=false;
for (int i=0; i<5; i++) {
  cin >> a >> oper >> b >> oper2 >> c;
  switch (oper) {  
      case '+':  
      if ( (a+b)==c ) cout << "correct" << endl;
        else cout << "wrong" << endl;
      break;

      case '-':
      if ( (a-b)==c ) cout << "correct" << endl;
        else cout << "wrong" << endl;
      break;

      case '*':  
      if ( (a*b)==c ) cout << "correct" << endl;
        else cout << "wrong" << endl;
      break;

      case '/':  
      if ( (a/b)==c ) cout << "correct" << endl;
        else cout << "wrong" << endl;
      break;

      case '%':  
      if ( (a%b)==c ) cout << "correct" << endl;
        else cout << "wrong" << endl;
      break;
  }
  i++;
}
}