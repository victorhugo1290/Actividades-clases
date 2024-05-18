#include <iostream>
using namespace std;
struct datos{
    char nombre[20], apellido[20];
    int edad;
    int estatura;
    char ciudad[20], estado[20], municipio[20];
    char calle[20];
}d1,d2,d3,d4,d5;
void menu1(){
    cout<<"--------------------------------"<<endl;
    cout<<"Ingresa tus datos               |"<<endl;
    cout<<"Ingresa el nombre               |"<<endl;
    cin.getline(d1.nombre, 20); cout<<"    |"<<endl;
    cout<<"ingresa el apellido             |"<<endl;
    cin.getline(d1.apellido, 20);cout<<"   |"<<endl;
    cout<<"Ingrese su edad                 |"<<endl;
    cin>>d1.edad;cout<<"                   |"<<endl;
    cout<<"Ingrese su estatura en cm       |"<<endl;
    cin>>d1.estatura;cout<<"               |"<<endl;
    cout<<"Ingrese su calle                |"<<endl;
    cin.getline(d1.calle, 20);cout<<"      |"<<endl;
    cout<<"Ingrese su ciudad               |"<<endl;
    cin.getline(d1.ciudad, 20);cout<<"     |"<<endl;
    cout<<"Ingrese su estado               |"<<endl;
    cin.getline(d1.estado, 20);cout<<"     |"<<endl;
    cout<<"--------------------------------"<<endl;
}
void menu2(){
    cout<<"Ingresa tus datos"<<endl;
    cout<<"Ingresa el nombre"<<endl;
    cin.getline(d2.nombre, 20);
    cout<<"ingresa el apellido"<<endl;
    cin.getline(d2.apellido, 20);
    cout<<"Ingrese su edad"<<endl;
    cin>>d2.edad;
    cout<<"Ingrese su estatura en cm"<<endl;
    cin>>d2.estatura;
    cout<<"Ingrese su calle"<<endl;
    cin.getline(d2.calle, 20);
    cout<<"Ingrese su ciudad"<<endl;
    cin.getline(d2.ciudad, 20);
    cout<<"Ingrese su estado"<<endl;
    cin.getline(d2.estado, 20);
    cout<<"-------------------------------"<<endl;
}void menu3(){
    cout<<"Ingresa tus datos"<<endl;
    cout<<"Ingresa el nombre"<<endl;
    cin.getline(d3.nombre, 20);
    cout<<"ingresa el apellido"<<endl;
    cin.getline(d3.apellido, 20);
    cout<<"Ingrese su edad"<<endl;
    cin>>d3.edad;
    cout<<"Ingrese su estatura en cm"<<endl;
    cin>>d3.estatura;
    cout<<"Ingrese su calle"<<endl;
    cin.getline(d3.calle, 20);
    cout<<"Ingrese su ciudad"<<endl;
    cin.getline(d3.ciudad, 20);
    cout<<"Ingrese su estado"<<endl;
    cin.getline(d3.estado, 20);
    cout<<"-------------------------------"<<endl;
}void menu4(){
    cout<<"Ingresa tus datos"<<endl;
    cout<<"Ingresa el nombre"<<endl;
    cin.getline(d4.nombre, 20);
    cout<<"ingresa el apellido"<<endl;
    cin.getline(d4.apellido, 20);
    cout<<"Ingrese su edad"<<endl;
    cin>>d4.edad;
    cout<<"Ingrese su estatura en cm"<<endl;
    cin>>d4.estatura;
    cout<<"Ingrese su calle"<<endl;
    cin.getline(d4.calle, 20);
    cout<<"Ingrese su ciudad"<<endl;
    cin.getline(d4.ciudad, 20);
    cout<<"Ingrese su estado"<<endl;
    cin.getline(d4.estado, 20);
    cout<<"-------------------------------"<<endl;
}void menu5(){
    cout<<"Ingresa tus datos"<<endl;
    cout<<"Ingresa el nombre"<<endl;
    cin.getline(d5.nombre, 20);
    cout<<"ingresa el apellido"<<endl;
    cin.getline(d5.apellido, 20);
    cout<<"Ingrese su edad"<<endl;
    cin>>d5.edad;
    cout<<"Ingrese su estatura en cm"<<endl;
    cin>>d5.estatura;
    cout<<"Ingrese su calle"<<endl;
    cin.getline(d5.calle, 20);
    cout<<"Ingrese su ciudad"<<endl;
    cin.getline(d5.ciudad, 20);
    cout<<"Ingrese su estado"<<endl;
    cin.getline(d5.estado, 20);
    cout<<"-------------------------------"<<endl;
}
void mostrar(){
    cout<<"-------------------------------"<<endl;
    cout<<"este es el registo 1           |"<<endl;
    cout<<d1.nombre<<"                    |"<<endl;
    cout<<d1.apellido<<"                  |"<<endl;
    cout<<d1.edad<<"                      |"<<endl;
    cout<<d1.estatura<<"                  |"<<endl;
    cout<<d1.calle<<"                     |"<<endl;
    cout<<d1.ciudad<<"                    |"<<endl;
    cout<<d1.estado<<"                    |"<<endl;
 cout<<"este es el registo 2              |"<<endl;
    cout<<d2.nombre<<"                    |"<<endl;
    cout<<d2.apellido<<"                  |"<<endl;
    cout<<d2.edad<<"                      |"<<endl;
    cout<<d2.estatura<<"                  |"<<endl;
    cout<<d2.calle<<"                     |"<<endl;
    cout<<d2.ciudad<<"                    |"<<endl;
    cout<<d2.estado<<"                    |"<<endl;
 cout<<"este es el registo 3              |"<<endl;
    cout<<d3.nombre<<"                    |"<<endl;
    cout<<d3.apellido<<"                  |"<<endl;
    cout<<d3.edad<<"                      |"<<endl;
    cout<<d3.estatura<<"                  |"<<endl;
    cout<<d3.calle<<"                     |"<<endl;
    cout<<d3.ciudad<<"                    |"<<endl;
    cout<<d3.estado<<"                    |"<<endl;
 cout<<"este es el registo 4              |"<<endl;
    cout<<d4.nombre<<"                    |"<<endl;
    cout<<d4.apellido<<"                  |"<<endl;
    cout<<d4.edad<<"                      |"<<endl;
    cout<<d4.estatura<<"                  |"<<endl;
    cout<<d4.calle<<"                     |"<<endl;
    cout<<d4.ciudad<<"                    |"<<endl;
    cout<<d4.estado<<"                    |"<<endl;
 cout<<"este es el registo 5              |"<<endl;
    cout<<d5.nombre<<"                    |"<<endl;
    cout<<d5.apellido<<"                  |"<<endl;
    cout<<d5.edad<<"                      |"<<endl;
    cout<<d5.estatura<<"                  |"<<endl;
    cout<<d5.calle<<"                     |"<<endl;
    cout<<d5.ciudad<<"                    |"<<endl;
    cout<<d5.estado<<"                    |"<<endl;
cout<<"-----------------------------------"<<endl;
}
int main(){
menu1();
cout<<"Perfecto, completado el primer registro"<<endl;
cout<<"Continuemos"<<endl;
menu2();
cout<<"registro 2 completado"<<endl;
menu3();
cout<<"registro 3 completo"<<endl;
menu4();
cout<<"registro 4 completado"<<endl;
menu5();
cout<<"todos los registros completos"<<endl;
mostrar();


}