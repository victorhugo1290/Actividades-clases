#include <iostream>
using namespace std;
int a=1, b=2, c=0, num1, eleg, opc;
int main (){
    cout<<"Vamos a hacer la serie de fibonacci"<<endl;
do
{
   cout<<"Ingresa un numero"<<endl; 
   cin>>num1;
   cout<<"Que ciclo que quieres utilizar"<<endl;
   cout<<"For: 1"<<endl;
   cout<<"While: 2"<<endl;
   cout<<"Do-While: 3"<<endl;
   cin>>eleg;
   switch (eleg)
   {
   case 1:
    cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    for ( c = 0; c <= num1;)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<endl;
    }
    break;
   case 2:
   cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    c=0;
    while (c<=num1)
    {
         c=a+b;
        a=b;
        b=c;
        cout<<a<<endl;
    }
    break;
    case 3:
    cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    cout<<"1"<<endl;
    c=0;
    do
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<endl;
    } while (c<=num1);
   }
   cout<<"Quieres ingresar otro numero?"<<endl;
    cout<<"1: Si"<<endl;
    cout<<"2: NO"<<endl;
    cin>>opc;
    
} while (opc=1);
cout<<"Perfecto, Hasta luego"<<endl;
}