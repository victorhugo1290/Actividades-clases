/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 04/FEBREEO/2024
 PROGRAMA: Actividad4.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: El programa hara la serie de fibonacci hasta el numero que ingreso el usuario
***************************************/

#include <iostream>//libreria 
using namespace std;
int  a, b, c, num1, eleg, opc;//declaracion de varibles 
int main (){//incio del programa 
    cout<<"Vamos a hacer la serie de fibonacci"<<endl;
do//inicio del cliclo para reiniciar el prgrama 
{
   cout<<"Ingresa un numero"<<endl; 
   cin>>num1;
   cout<<"Que ciclo que quieres utilizar"<<endl;
   cout<<"For: 1"<<endl;//aqui el usuario decididara con que ciclo quiere ejecutar el problema
   cout<<"While: 2"<<endl;
   cout<<"Do-While: 3"<<endl;
   cin>>eleg;
   switch (eleg)//inicio del switch por la eleccion del usuario 
   {
   case 1://caso uno
    cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    a=0;//la variable "a" iniciara como 0
    b=1;//la variable "b" iniciara como 1
    for ( c = 0; c <= num1;)//se repetira el cliclo miestras que c sea menor o igual que el numero que puso el usuario 
    {
        c=a+b;//"c" sera la suma de "a" mas "b"
        a=b;//"a" pasara a tomar el valor de "B"
        b=c;//"b" pasara a tomar el valor de "c"
        cout<<a<<endl;//se mostrara el respectivo valor de "a" en cada ciclo 
    }
    break;
   case 2:
   cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    c=0;
    a=0;//la variable "a" iniciara como 0
    b=1;//la variable "b" iniciara como 1
    while (c<=num1)//miestras c sea menor o igual al numero ingresado por el usurio se repetira el usuario
    {
        c=a+b;//"c" sera la suma de "a" mas "b"
        a=b;//"a" pasara a tomar el valor de "B"
        b=c;//"b" pasara a tomar el valor de "c"
        cout<<a<<endl;//se mostrara el respectivo valor de "a" en cada ciclo 
    }
    break;
    case 3:
    cout<<"La serie hasta la cantidad que ingresaste es:"<<endl;
    cout<<"0"<<endl;
    c=0;
    a=0;//la variable "a" iniciara como 0
    b=1;//la variable "b" iniciara como 1
    do//inicio del el ciclo 
    {
        c=a+b;//"c" sera la suma de "a" mas "b"
        a=b;//"a" pasara a tomar el valor de "B"
        b=c;//"b" pasara a tomar el valor de "c"
        cout<<a<<endl;//se mostrara el respectivo valor de "a" en cada ciclo 
    } while (c<=num1);//el cliclo acabara cuando c sea mayor que el numero ingresado por el usuario
    break;
   }
    cout<<"Quieres ingresar otro numero?"<<endl;
    cout<<"1: Si"<<endl;
    cout<<"2: NO"<<endl;
    cin>>opc;
} while (opc==1);
cout<<"Perfecto, Hasta luego"<<endl;

}
