#include <iostream>
using namespace std;
int main()
{
    int num1,num2,resultado,opcion;
    cout<<"Bienvenido a la calculadora eli:"<<endl;
    cout<<"#1 suma"<<endl;
    cout<<"#2 resta"<<endl;
    cout<<"#3 division"<<endl;
    cout<<"#4 multiplicacion"<<endl;
    cout<<"Escoge la operacion que deseas realizar:"<<endl;
    cin>>opcion;
    switch(opcion)
    {
        case 1:
         cout<<"ingrese su primer numero:"<<endl;
         cin>>num1;
         cout<<"ingrese el segundo numero:"<<endl;
         cin>>num2;
         resultado=num1+num2;
         cout<<"El resultado de su suma es:"<<resultado<<endl;
         break;

        case 2:
         cout<<"ingrese su primer numero:"<<endl;
         cin>>num1;
         cout<<"ingrese el segundo numero:"<<endl;
         cin>>num2;
         resultado=num1-num2;
         cout<<"El resultado de su resta es:"<<resultado<<endl;
         break;

        case 3:
         cout<<"ingrese su primer numero:"<<endl;
         cin>>num1;
         cout<<"ingrese el segundo numero:"<<endl;
         cin>>num2;
         resultado=num1/num2;
         cout<<"El resultado de su division es:"<<resultado<<endl;
         break;

        case 4:
         cout<<"ingrese su primer numero:"<<endl;
         cin>>num1;
         cout<<"ingrese el segundo numero:"<<endl;
         cin>>num2;
         resultado=num1*num2;
         cout<<"El resultado de su multiplicacion es:"<<resultado<<endl;
         break;
         return 0;

    }
}