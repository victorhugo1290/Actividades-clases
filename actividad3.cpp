/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 23/ENERO/2024
 PROGRAMA: Actividad3.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: dependiendo de el valor que se ingrese se sumara sobre 5 o sobre 10
***************************************/
   #include<iostream>//declarar libreria
using namespace std;
int main() {
    int nume1, contador=0, repetir;//declarar variables  
    do {//iniciamos el ciclo
        cout<<"Ingrese un número: ";//le pedimos al usurio el valor a comparar 
        cin>>nume1;
        if (nume1 > 0 && nume1 < 500) {//empezara a comparar para verificar que es lo que hara
        for (int l = 5; l <= 500; l += 5) {
                cout<<l<<endl;
            }
        } else if (nume1 > 500 && nume1 < 1000) {
        for (int l = 10; l <= 500; l += 10) {
        cout<<l<<endl;
            }
        } else if (nume1 >- 1000) {
            cout<< "Valor invalido"<<endl;
        }
        cout<< "¿Quiere ingresar otro número? 1:Si 2:No" <<endl;
        cin>>repetir;
       contador++;//suma la cantidad de veces que pides los numeros
    } while (repetir == 1);
cout<<contador<<endl;
}

