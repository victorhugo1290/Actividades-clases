/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 23/ABRIL/2024
 PROGRAMA: Actividad9.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: LLenado de arreglos con recursividad.
***************************************/
#include <iostream>
using namespace std;
int tamano;
int desicion, tam;
bool flag=true;
void validar(){//funcion para valdar los datos
if (cin.fail()) {                     // validacion del menu 
            cout << "Opcion no valida"<<endl;
            cout <<endl;
            cin.clear(); // Restablecer el estado de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
     }
}
int ingresararreglo(int arreglo[], int tamano, int valor){//Funcion recursiva para ingresar datos
    if(valor>=tamano){//caso base de la recursividad
        return 1;
    }
    cout<<"Ingrese el valor para el arreglo"<<endl;
    cin>>arreglo[valor];
    validar();
    ingresararreglo(arreglo, tamano, valor +1);//llamar la recursividad
}
int imprimirarreglo(int arreglo[], int tamano, int valor){//Funcion recursiva para imprimir los datos
    if(valor>=tamano){//caso base de la recursividad
        return 1;
    }
    cout<<arreglo[valor]<<endl;
    imprimirarreglo(arreglo, tamano, valor +1);
}

void menu(){//menu del programa
    do{
    cout<<"Binvenido"<<endl;
    cout<<"Que quieres hacer?"<<endl;
    cout<<"1.-ingrsar datos"<<endl;
    cout<<"2.-mostrar datos"<<endl;
    cout<<"3.-Salir del programa"<<endl;
    cin>>desicion;
    validar();
    if(desicion>4){
        cout<<"Opcion invalida"<<endl;
    }
    if(desicion<1){
        cout<<"Opcion invalida"<<endl;
    }
    }
    while(desicion>4);
}
int main(){//inicio del programa
    int tamano;
    int arreglo[tamano];
   do{
    cout<<"Elegir de que tamaño es el arreglo, tiene que ser de 5 o mayor"<<endl;
    cin>>tam;
    validar();
    if (tam<5)
    {
        cout<<"cantidad invalida"<<endl;
    }
   }while(tam<5);
    tamano=tam;;
    while(flag){
menu();
switch (desicion)//switch para la eleccion del usuario
{
case 1:
    ingresararreglo(arreglo, tamano, 0);
    break;
case 2:
     imprimirarreglo(arreglo, tamano, 0);
break;
case 3:
    flag=false;//accion para salir del programa
default:
    break;
}
    }
    cout<<"Gracias por usar el programa"<<endl;

}