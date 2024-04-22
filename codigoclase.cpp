#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>//Librer�as

int lugar, suma=0, num, valor, a, n;//variables enteras
int myvector[50]; // Vector de 10 elementos inicializados en 0

using namespace std;

int particion(int myvector[], int inicio, int fin) {
    int pivote = myvector[fin];
    int i = (inicio - 1);

    for (int j = inicio; j <= fin - 1; j++) {
        if (myvector[j] < pivote) {
            i++;
            swap(myvector[i], myvector[j]);
        }
    }
    swap(myvector[i + 1], myvector[fin]);
    return (i + 1);
}
///using namespace std;
void lista(){
    cout<<"As� queda la lista de valores que proporcionaste"<<endl;
		    for(int a=0; a<50; a++){
		    cout<<myvector[a]<<endl;//Se imprime todos los valores que ingresamos a myvector
      }
}


void editar(){
     cout<<"Ingresa  la posici�n que deseas modificar o borrar empezando del 0-9"<<endl;
		    cin>>lugar;//varible de posici�n
		    if (lugar >=0 && lugar < 50){//rango de posici�n
			cout<<"Ahora pon tu n�mero nuevo"<<endl;
			cin>>num;//variable de nuevo n�mero
			myvector[lugar]=num;}//se determina
     }

void vaciar(){
     for (int i=0; i<50; ++i) {
        myvector[i]=0;
    }
	 cout<<"Ha quedado vacío"<<endl;
     }

void quicksort(int myvector[], int inicio, int fin) {
    if (inicio < fin) {
        int indiceParticion = particion(myvector, inicio, fin);
        quicksort(myvector, inicio, indiceParticion - 1);
        quicksort(myvector, indiceParticion + 1, fin);
    }
}
void burbuja(int myvector[], int tamano) {
    for (int i = 0; i < tamano - 1; ++i) {
        for (int j = 0; j < tamano - i - 1; ++j) {
            if (myvector[j] > myvector[j + 1]) {
                swap(myvector[j], myvector[j + 1]);
            }
        }
    }
}
void randomnum() {
    srand(time(nullptr)); // Inicializar la semilla del generador de números aleatorios

    for (int i = 0; i < 50; ++i) {
        myvector[i] = rand() % 200 + 1; // Generar números aleatorios entre 1 y 200
    }
}
int busquedaBinaria(int myvector[], int valor, int tamano) {
    int inicio = 0;
    int fin = tamano - 1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (myvector[medio] == valor) {
            cout << "El valor " << valor << " se encuentra en la posición " << medio << " del arreglo." << endl;
            return medio;
        }

        if (myvector[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    cout << "El valor " << valor << " no se encuentra en el arreglo." << endl;
    return -1;
}
int main (){//inicio del programa
    char letra;
    int accion;
	int pos=0;

    cout<<"Hola, hola, bienvenid@ a este programa para crear tus valores en el arreglo, Comencemos!!"<<endl;
   do{//ciclo
   
        cout<<"Ingresa la posici�n que deseas modificar o borrar empezando del 0-49"<<endl;
		    cin>>lugar;//variable para determinar la posici�n
            do{//LIZ ESTE DO ES PARA QUE SE REPITA SI PONEN UN NUMERO MAYOR A 200
		    if (lugar >= 0 && lugar<50){//rango de posici�n
			cout<<"Ahora pon el n�mero que deseas"<<endl;
			cin>>num;//variable del n�mero que se desea agregar
			myvector[lugar]=num;}
            if (num > 200)
            cout<<"Valor invalido"<<endl;
   }while(num>200);
            cout<<"deseas seguir escribir 's' para seguir o 'n' para terminar"<<endl;
            cin>>letra;//determinar si se quieren o no seguir agregando n�meros
            if(letra=='s')//en caso de si querer
            cout<<"continuemos!!"<<endl;
            if (letra=='n')//en caso de no querer
            cout<<"Iremos al men�..."<<endl;
   }while(letra!='n');//condici�n para salir del ciclo

do{//comienzo del ciclo repetir
	cout<<"Selecciona la acci�n que le deseas aplicar al arreglo, ingresa el n�mero de lo que deseas hacer:\n"
	"1-Mostrar la lista de valores\n"
    "2-Mostrar sumatoria de todos los elementos\n"
    "3-Borrado y edici�n de elementos\n""4-Vaciado del arreglo\n""5-Autollenado\n""6-Ordenamiento burbuja\n"
    "7-Ordenamiento Quicksort\n""8-Busqueda Binaria\n""9-Salir del programa"<<endl;//Men� de acciones
	cin>>accion;//Se lee lo que se desea hacer
	switch (accion) {//inicio del switch

		case 1://primer caso (mostrar la lista)
		    lista();
			break;

		case 3://tercer caso(editar o eliminar)
            editar();
			break;

		case 4://cuarto caso(vaciado)
		    vaciar();
			break;

        case 5://quinto caso(autollenado)
            randomnum();
			cout<<"El arreglo ya ha sido rellenado con valores aleatorios entre el 1 y el 200"<<endl;
            break;

		case 6://ordenamiento burbuja
		burbuja(myvector, 50);
                cout << "El arreglo fue ordenado por método de burbuja" << endl;
                break;

    	case 7: //ordenamiento quicksort 
		  quicksort(myvector, 0, 49);
    	  cout<<"Arreglo ordenado con el método Quicksort."<<endl;
   		 break;
		
		case 8:
        cout << "Ingresa el valor que deseas buscar:" << endl;
                cin >> num;
                if (busquedaBinaria(myvector, num, 50) != -1) {
                    cout << "El valor " << num << " se encuentra en el arreglo." << endl;
                } else {
                    cout << "El valor " << num << " no se encuentra en el arreglo." << endl;
                }
    		break;

		case 9: //sexto caso (salir del programa)
			cout<<"Gracias por tu ayuda, nos vemos luego ;) "<<endl;//despedida
			break;
		default:
            cout<<"Selección inválida. Por favor, selecciona un número del 1 al 6."<<endl;
            break;
        }
    } while (accion!=9);//Fin del ciclo "do" ponemos la condici�n de ingresar el caso 5

	}//fin del programa