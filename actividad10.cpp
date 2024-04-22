/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 21/ABRIL/2024
 PROGRAMA: Actividad10.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: Algoritmo de Ordenamiento y Busqueda.
***************************************/
#include <iostream>  // Librería estándar para entrada/salida
#include <cstdlib>   // Librería estándar de C para funciones generales
#include <ctime>     // Librería para funciones relacionadas con el tiempo
using namespace std; // Espacio de nombres estándar

// Declaración de variables globales
int pos = 0, e, b, arreglo[50];
char eleccion;
bool flag = true;  // Variable de control para repetir el programa

// Función de partición para el algoritmo Quicksort
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

// Función Quicksort para ordenar el arreglo
void quicksort(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int indiceParticion = particion(arreglo, inicio, fin);
        quicksort(arreglo, inicio, indiceParticion - 1);
        quicksort(arreglo, indiceParticion + 1, fin);
    }
}

// Función de ordenamiento Burbuja para ordenar el arreglo
void ordenamientoBurbuja(int arreglo[], int tamano) {
    for (int i = 0; i < tamano - 1; ++i) {
        for (int j = 0; j < tamano - i - 1; ++j) {
            if (arreglo[j] > arreglo[j + 1]) {
                swap(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

// Función para borrar un elemento del arreglo
void borrar() {
    if (pos == 0) {
        cout << "No tiene elementos" << endl;
    } else {
        cout << "Ingrese el índice del elemento para borrar 1, " << pos << endl;
        for (int i = 0; i < pos; i++) {
            cout << i + 1 << ":" << arreglo[i] << endl;
        }
        cout << "Seleccione una opción: ";
        cin >> b;
        b = b - 1;
        arreglo[b] = 0;
        cout << "Elemento borrado" << endl;
    }
}

// Función para vaciar el arreglo
void vaciado() {
    if (pos == 0) {
        cout << "Ya se encuentra Vacío" << endl;
    } else {
        for (int i = 0; i < pos; i++) {
            arreglo[i] = 0;
        }
        pos = 0;
        cout << "Elementos borrados" << endl;
    }
}

// Función para editar un elemento del arreglo
void editar() {
    if (pos == 0) {
        cout << "No hay valores" << endl;
    } else {
        cout << "Qué valor desea editar" << endl;
        for (int i = 0; i < pos; i++) {
            cout << i + 1 << ":" << arreglo[i] << endl;
        }
        cout << "Seleccione: ";
        cin >> e;
        e = e - 1;
        cout << "Ingrese el nuevo número: ";
        cin >> arreglo[e];
        if (arreglo[e] > 200) {
            cout << "Valor incorrecto" << endl;
        }
        cout << "Valor editado" << endl;
    }
}

// Función para mostrar la lista de valores en el arreglo
void lista() {
    if (pos == 0) {
        cout << "No tiene valores que mostrar" << endl;
    } else {
        cout << endl;
        for (int i = 0; i < pos; i++) {
            cout << arreglo[i] << endl;
        }
        cout << endl;
    }
}

// Función para ingresar valores al arreglo
void valoresarreglo() {
    if (pos == 50) {
        cout << "Ya está completo" << endl;
    } else {
        cout << "Ingrese el número " << pos + 1 << ": ";
        cin >> arreglo[pos];
        if (arreglo[pos] < 200) {
            pos++;
        } else {
            cout << "Valor inválido" << endl;
        }
    }
}

// Función para llenar el arreglo con números aleatorios
void aleatorio() {
    srand(time(nullptr));  // Inicializar la semilla para la generación de números aleatorios

    for (arreglo[pos]; arreglo[pos] < 50; pos++) {
        arreglo[pos] = rand() % 201;  // Genera un número entre 0 y 200
    }

    cout << "Arreglo llenado con números aleatorios." << endl;
}

// Función para mostrar el menú de opciones
void menu() {
    cout << "Bienvenido" << endl;
    cout << "\n--- Menú ---" << endl;
    cout << "1. Ingresar un valor" << endl;
    cout << "2. Mostrar lista de valores" << endl;
    cout << "3. Llenar con números aleatorios" << endl;
    cout << "4. Ordenar el arreglo con Quicksort" << endl;
    cout << "5. Ordenar el arreglo con Burbuja" << endl;
    cout << "6. Editar un elemento" << endl;
    cout << "7. Borrar un elemento" << endl;
    cout << "8. Vaciar arreglo" << endl;
    cout << "9. Salir" << endl;
    cin >> eleccion;
}

// Función principal (main)
int main() {
    while (flag) {  // Bucle principal del programa
        menu();  // Mostrar el menú
        switch (eleccion) {  // Switch para manejar las opciones del menú
            case '1':
                valoresarreglo();
                break;
            case '2':
                lista();
                break;
            case '3':
                aleatorio();
                break;
            case '4':
                quicksort(arreglo, 0, pos - 1);
                cout << "Arreglo ordenado con el método Quicksort." << endl;
                break;
            case '5':
                ordenamientoBurbuja(arreglo, pos);
                cout << "El arreglo fue ordenado por método de burbuja" << endl;
                break;
            case '6':
                editar();
                break;
            case '7':
                borrar();
                break;
            case '8':
                vaciado();
                break;
            case '9':
                flag = false;
                break;
            default:
                cout << "Opción incorrecta" << endl;
                break;
        }
    }

    cout << "Gracias por usar el programa" << endl;  // Mensaje de despedida
}
