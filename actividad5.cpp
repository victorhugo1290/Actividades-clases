/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 21/Febrero/2024
 PROGRAMA: Actividad5.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: Pedir valores con arreglos
***************************************/
#include <iostream>//libreria
using namespace std;

// Declaración de variables 
int pos=0,e,b,suma, arreglo[10];
char eleccion;
bool flag = true;//funcion para repetir el programa

// Función principal
int main() {
    // Bucle principal del programa
while (flag) {
// Menú de opciones
cout<<"Bienvenido"<<endl;
cout << "\n--- Menú ---" << endl;
cout << "1. Ingresar un valor" << endl;
cout << "2. Mostrar lista de valores" << endl;
cout << "3. Mostrar sumatoria de todos los elementos" << endl;
cout << "4. Editar un elemento" << endl;
cout << "5. Borrar un elemento" << endl;
cout << "6. Vaciar arreglo" << endl;
cout << "7. Salir" << endl;
    cin >> eleccion;
// Switch para manejar las opciones del menú
    switch (eleccion) {
case '1':
    // Ingresar valores al arreglo
    if (pos == 10) {
    cout << "Ya esta completo"<<endl;
    } else {
    cout<<"Ingrese el numero"<<" "<<pos+1<<endl;
    cin >> arreglo[pos];
    pos++;
    }
    break;
 case '2':
    // Mostrar lista de valores en el arreglo
    if (pos == 0) {
    cout <<"NO tiene valores que mostrar"<<endl;
    } 
    else {
    cout << endl;
    for (int i = 0; i < pos; i++) {
    cout<<arreglo[i]<<endl;
    }
    cout << endl;
    }
    break;
case '3':
    // Mostrar la sumatoria de los valores en el arreglo
    if (pos == 0) {
    cout << "No tiene valores que sumar"<<endl;
    } 
    else {
    cout << endl;
    suma = 0;
    for (int i = 0; i < pos; i++) {
    suma+=arreglo[i];
    }
    cout<<"La suma es: "<<suma<<endl;
    }
    break;
case '4':
    // Editar un elemento del arreglo
    if (pos == 0) {
    cout<<"No hay valores"<<endl;
    } 
    else {
    cout << "Que valor desea editar"<<endl;
    for (int i = 0; i < pos; i++) {
    cout <<i+1<<":"<<arreglo[i]<<endl;
        }
    cout << endl;
    cout << "Seleccione: ";
    cin >> e;
    e = e - 1;
    cout << "Ingrese el nuevo numero ";
    cin >> arreglo[e];
    cout<<"Valor editado"<<endl;
    }
    break;
case '5':
    // Borrar un elemento del arreglo
    if (pos == 0) {
    cout <<"No tiene elementos"<<endl;
    } 
    else {
    cout<<"Ingrese el índice del elemento para borrar 1,10"<<endl;
    for (int i = 0; i < pos; i++) {
    cout<<i+1<<":"<<arreglo[i]<< endl;
    }
    cout << endl;
    cout << "Seleccione una opción: ";
    cin >> b;
    b = b - 1;
    arreglo[b] = 0;
    cout << "Elemento borrado" << endl;
    }
    break;
case '6':
    // Vaciar completamente el arreglo
    if (pos == 0) {
    cout << "Ya se encuentra Vacio"<<endl;
    } 
    else {
    for (int i = 0; i < pos; i++) 
    {
    arreglo[i] = 0;
    }
    pos = 0;
    cout << "Elementos borrados"<<endl;
    }
    break;
case '7':
    // Salir del programa
    flag = false;
        break;
    default:
    // Opción incorrecta en el menú
    cout<<"Opcion incorrecta"<<endl;
    break;
        }
    } 

    // Mensaje de despedida al salir del programa
    cerr << "Adiós" << endl;
}

