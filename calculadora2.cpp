#include <iostream>
using namespace std;

int main() 
{
  char op;
float num1, num2;
cout<<"ingrese el primer numero";
  cin>>num1;
cout<<"ingrese el segundo numero";
cin>>num2;
cout<<"ingrese el operador (+ , - , * , / ";
cin>>op;
switch (op) {
case '+':
cout<< num1 <<"+"<< num2 <<"="<< num1 + num2;
break;
case '-':
cout<< num1 <<"-"<< num2 <<"="<< num1 - num2;
break;
case '*':
cout<< num1 <<"*"<< num2 <<"="<< num1 * num2;
break;
case '/':
  if(num2 != 0)
  {
cout<< num1 <<"/"<< num2 <<"="<< num1 / num2;
  }else{
    cout<<"se introdujo 0, no es divisible";
  }
    break;
default:
cout<<"operador invalido"
  }
  return 0;
}
