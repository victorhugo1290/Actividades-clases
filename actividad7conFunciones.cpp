/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 8/ABRIL/2024
 PROGRAMA: Actividad7.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: Operacion de conjuntos.
***************************************/
#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int opcion,cele,cantidad,sino,e, numerito=0, decision,ele,numero, numerito2=0, vaciar=0;
vector<string> universo, conjuntoUnion, conjuntoDiferencia;
char entrada;
 string conjunto[20], conjunto2[20];
 string valor;
 bool flag=true;
int operaciones()
    {
    int cual;
cout<<"Que operacion quieres hacer?"<<endl;
cout<<"1. Union"<<endl;
cout<<"2. interseccion"<<endl;
cout<<"3. Diferencia"<<endl;
cout<<"4. Complemento"<<endl;
cin>>cual;
    }
 void validar(){
if (cin.fail()) {                     // validacion del menu 
            cout << "No es una opcion valida."<< endl;
            cout <<endl;
            cin.clear(); // Restablecer el estado de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
     }
 }
int menuprincipal(){

cout << "\n--- Menú ---\n";
        cout << "1. ingresar conjunto"<<endl;
        cout << "2. Mostrar conjuntos"<<endl;
        cout << "3. Operaciones con conjuntos"<<endl;
        cout << "4. Editar elemento del conjunto"<<endl;
        cout << "5. Vaciar conjunto"<<endl;
        cout << "6. Salir"<<endl;
        cout << "Ingrese su opción: "<<endl;
        cin >> opcion;
        validar();
return opcion;
}
void conjuntos(){

cout<<"quieres ingresar en el conjunto 1 o 2"<<endl;
        cin>>cele;
        validar();
        if (cele==1)
        {
            cout<<"Ingrese el elemento del conjunto"<<endl;
            if (numerito<cantidad)
            {
                 cin>>conjunto[numerito];
                 numerito++;
            }
            else if(numerito>=cantidad){cout<<"ya esta lleno el conjunto"<<endl;}
        }
          if (cele==2)
        {
            cout<<"Ingrese el elemento del conjunto"<<endl;
            if (numerito2<cantidad)
            {
                 cin>>conjunto2[numerito2];
                 numerito2++;
            }
            else if(numerito2>=cantidad){cout<<"ya esta lleno el conjunto"<<endl;}
        }






}
void imprimir(){
cout<<"Que conjunto quieres imprimir 1 o 2"<< endl;
                    cin>>decision;
                    validar();
                    if (decision == 1)
                    {
                            for (int i = 0; i < cantidad; i++)
                    {
                            cout <<"{"<< conjunto[i] <<"}";
                    cout <<" ";
                        }
                    }
                    else if (decision == 2)
                    {
                        for (int i = 0; i < cantidad; i++)
                        {
                                cout<<"{" << conjunto2[i]<<"}";
                
                            cout <<" ";
                        }
                    }
                    
}
void operacionconjunto(){
    int opcoperaciones;
     cout<<"Que operacion quieres utilizar"<<endl;
      cout<<"1.Union "<<endl;
      cout<<"2.Interseccion"<<endl;
      cout<<"3.Diferencia"<<endl;
      cout<<"4.Complemento"<<endl;
                cin >> opcoperaciones;                                                                                            
            switch (opcoperaciones)                                                                                             
            {
            case 1: 
                conjuntoUnion.clear();
                for (const string &elem : conjunto)
                {
                    conjuntoUnion.push_back(elem);
                }
                for (const string &elem : conjunto2)
                {
                    bool found = false;
                    for (const string &elem2 : conjuntoUnion)
                    {
                        if (elem == elem2)
                        {
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        conjuntoUnion.push_back(elem);
                    }
                }

                cout << "La unión de los conjuntos es: " << endl; 
                for (const string &elem : conjuntoUnion)
                {
                    cout << "{" << elem << "}, ";
                }
                cout << endl;
                break;
            case 2: 
                conjuntoUnion.clear();
                for (const string &elem : conjunto)
                {
                    for (const string &elem2 : conjunto2)
                    {
                        if (elem == elem2)
                        {
                            conjuntoUnion.push_back(elem);
                        }
                    }
                }
                cout << "La intersección de los conjuntos es: " << endl; 
                for (const string &elem : conjuntoUnion)
                {
                    cout << "{" << elem << "}, ";
                }
                cout << endl;
                break;
            case 3: 
                conjuntoDiferencia.clear();
                for (const string &elem : conjunto)
                {
                    bool found = false;
                    for (const string &elem2 : conjunto2)
                    {
                        if (elem == elem2)
                        {
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        conjuntoDiferencia.push_back(elem);
                    }
                }
                cout << "La diferencia de los conjuntos (conjunto1 - conjunto2) es: " << endl; 
                for (const string &elem : conjuntoDiferencia)
                {
                    cout << "{" << elem << "}, ";
                }
                cout << endl;
                break;
            case 4: // Complemento de conjuntos
                cout<<"No se puede indentifiacar el complemento del conjunto sin el universo"<<endl;
                break;
            default: // Opción no válida
                cout << "Opción no válida" << endl;
            }
}
void editar(){
    cout<<"De que conjunto deseas editar"<<endl;
    cout<<"1 o 2"<<endl;
    cin>>ele;
    validar();
    if (ele==1)
    {
        numero=0;
        for (int i = 0; i < cantidad; i++)
                    {
                            cout <<numero<<"="<<"{"<< conjunto[i] <<"}";
                    cout <<" "<<endl;
                    numero++;
                        }
        cout<<"Que elemento quieres editar"<<endl;
        cin>>decision;
        validar();
        cout<<"Cual es el nuevo valor"<<endl;
        cin>>valor;
        conjunto[decision]=valor;
        cout<<"Se ha editado correctamente"<<endl;
        }else if(decision==2){ 
             numero=0;
        for (int i = 0; i < cantidad; i++)
                    {
                            cout <<numero<<"="<<"{"<< conjunto2[i] <<"}";
                    cout <<" "<<endl;
                    numero++;
                        }
        cout<<"Que elemento quieres editar"<<endl;
        cin>>decision;
        validar();
        cout<<"Cual es el nuevo valor"<<endl;
        cin>>valor;
        conjunto2[decision]=valor;
        cout<<"Se ha editado correctamente"<<endl;
        }
}
void vacia(){
    cout<<"Que conjunto quieres vaciar"<<endl;
    cout<<"1 o 2"<<endl;
    cin>>decision;
    validar();
    if (decision==1)
    {
          for (int i = 0; i < cantidad; i++)
                    {
                          conjunto[i]=vaciar; 
                          
                     }
                     numerito=0;
                     cout<<"Se ha vaciado correctamente"<<endl;
    }
    else if(decision==2)
    {
            for (int i = 0; i < cantidad; i++)
                    {
                          conjunto2[i]=vaciar; 
                          
                     }
                     numerito2=0;
                     cout<<"Se ha Vaciado correctamente"<<endl;
    }
    else
    {
        cout<<"Opcion no valida"<<endl;
    }   
    
}
int main (){
    do
    {
        cout<<"Cual es la cantidad de elemento que quiere ingresar en el conjunto?"<<endl;
    cin>>cantidad;
    validar();
    if (cantidad>=5)
    {
    while(flag)
        {
             opcion=menuprincipal();
    switch (opcion)
    {
    case 1:
        conjuntos();
        break;
    case 2:
        imprimir();
    break;
    case 3:
        operacionconjunto();
     
    break;
    case 4: 
        editar();
    break;
    case 5:
        vacia();
    
    break;
    case 6:
    flag=false;
    break;
    
    default:
        break;
    }
        }
        cout<<"Gracias por usar el programa"<<endl;
    }
    else
    {
        cout<<"Debe ser mayor a o igual a 5"<<endl;
    }
    }while(cantidad<5);

   





}