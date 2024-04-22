#include <iostream>//libreria
#include <cstdlib>
#include <ctime>
using namespace std;

// Declaración de variables 
int pos=0,e,b, arreglo[50], num;
char eleccion;
bool flag = true;//funcion para repetir el programa
int particion(int arreglo[], int inicio, int fin) {
    int pivote = arreglo[fin];
    int i = (inicio - 1);

    for (int j = inicio; j <= fin - 1; j++) {
        if (arreglo[j] < pivote) {
            i++;
           swap(arreglo[i], arreglo[j]);
        }
    }
    swap(arreglo[i + 1], arreglo[fin]);
    return (i + 1);
}

void quicksort(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int indiceParticion = particion(arreglo, inicio, fin);
        quicksort(arreglo, inicio, indiceParticion - 1);
        quicksort(arreglo, indiceParticion + 1, fin);
    }
}
void ordenamientoBurbuja(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; ++i) {
        for (int j = 0; j < tamano - i - 1; ++j) {
            if (arreglo[j] > arreglo[j + 1]) {
                swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}
void borrar(){
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
}
void vaciado(){
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
}
void editar(){
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
    if(arreglo[e]>200){
        cout<<"Valor incorrecto"<<endl;
        e-1;
        
    }
    cout<<"Valor editado"<<endl;
    }
}
void lista(){
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
}
void valoresarreglo(){
    if (pos == 50) {
    cout << "Ya esta completo"<<endl;
    } else {
         cout<<"Ingrese el numero"<<" "<<pos+1<<endl;
    cin >> arreglo[pos];
        if (arreglo[pos]<200)
        {
                
    pos++;
    }
    else{
         cout<<"valor invalido"<<endl;
    }
        }

       
}
void aleatorio(){
    // Semilla para la generación de números aleatorios
    std::srand(std::time(nullptr));

    // Generar números aleatorios y llenar el arreglo
    for (arreglo[pos]; arreglo[pos] < 50 ; pos++) {
        arreglo[pos] = std::rand() % 201; // Genera un número entre 0 y 200
    }

    std::cout << "Arreglo llenado con números aleatorios." << std::endl;
}
int busquedaBinaria(int arreglo[], int valor, int tamano) {
    int inicio = 0;
    int fin = tamano - 1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (arreglo[medio] == valor) {
            cout << "El valor " << valor << " se encuentra en la posición " << medio << " del arreglo." << endl;
            return medio;
        }

        if (arreglo[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "El valor " << valor << " no se encuentra en el arreglo." << endl;
    return -1;
}
void menu(){
    cout<<"Bienvenido"<<endl;
cout << "\n--- Menú ---" << endl;
cout << "1. Ingresar un valor" << endl;
cout << "2. Mostrar lista de valores" << endl;
cout << "3. Llenar con numeros aleatorios"<<endl;
cout << "4. Ordenar el arreglo con Quicksort" << endl;
cout << "5. Ordenar el arreglo con Burbuja" << endl;
cout << "6. Busqueda binaria" <<endl;
cout << "7. Editar un elemento" << endl;
cout << "8. Vaciar arreglo" << endl;
cout << "9. Salir"<<endl;
    cin >> eleccion;
}
// Función principal
int main() {
    // Bucle principal del programa
while (flag) {
// Menú de opciones
menu();
// Switch para manejar las opciones del menú
    switch (eleccion) {
case '1':
    // Ingresar valores al arreglo
    valoresarreglo();
    break;
 case '2':
    // Mostrar lista de valores en el arreglo
    lista();
    break;
case '3':
// Llenar con numeros aleatorios
    aleatorio();
    break; 
case '4':
// Ordenar el arreglo con Quicksort
    quicksort(arreglo, 0, pos - 1);
    cout<<"Arreglo ordenado con el método Quicksort."<<endl;
    break;
case '5':
 // Ordenar el arreglo con el método de burbuja
    ordenamientoBurbuja(arreglo, pos);
    cout<< "El arreglo fue ordenado por metodo de burbuja"<< endl;
    break;
case '6':
cout << "Ingresa el valor que deseas buscar:" << endl;
                cin >> num;
                if (busquedaBinaria(arreglo, num, 50) != -1) {
                    cout << "El valor " << num << " se encuentra en el arreglo." << endl;
                } else {
                    cout << "El valor " << num << " no se encuentra en el arreglo." << endl;
                }
break;
case '7':
  // Editar un elemento del arreglo
 editar();
    break; 
case '8':
    // Vaciar completamente el arreglo
    vaciado();
    break;
case '9':
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
    cout<<"Gracias por usar el programa"<<endl;
}
