/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 24/ENERO/2024
 PROGRAMA: Actividad1.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: el programa pedira al usuario sus datos personales para despues imprimirlos
***************************************/

#include <iostream>//libreria

using namespace std;
string nombre, fecha, lugar, edad, carrera, semestre, apellido;//variables
int main (){//funcion inicial 

cout<<"Vamos a tomarle los datos personales"<<endl;/*aqui inicia a pedir los datos al usurio */
cout<<"Ingrese su primer Nombre"<<endl;
cin>>nombre;
cout<<"Ingrese su primer apellido"<<endl;
cin>>apellido;
cout<<"Ingrese su edad"<<endl;
cin>>edad;
cout<<"Ingrese su Lugar de Residencia"<<endl;
cout<<"Si tu lugar de residencia cuenta con mas de una palabra agregala con un _"<<endl;
cout<<"ejemplo valle_de_guadalupe"<<endl;
cin>>lugar;
cout<<"Ingrese Fecha de Nacimiento (dia/mes/año)"<<endl;
cin>>fecha;
cout<<"Ingrese en que Carrera esta"<<endl;
cin>>carrera;
cout<<"Ingrese el Semestre en el que esta"<<endl;
cin>>semestre;
cout<<""<<endl;
cout<<""<<endl;

cout<<"Nombre: "<<nombre<<" "<<apellido<<endl;/* aqui el programa imprimira los datos recopilados que introdujo el usuario*/
cout<<"Edad: "<<edad<<endl;
cout<<"Lugar de residencia: "<<lugar<<endl;
cout<<"Fecha de nacimiento: "<<fecha<<endl;
cout<<"Carrera que estudia: "<<carrera<<endl;
cout<<"semestre: "<<semestre<<endl;
}