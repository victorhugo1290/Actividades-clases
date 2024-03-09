#include <iostream>
using namespace std;
int e, a, repetir, opcion, eleccion;
int menuoperaciones(){
cout<<"quie quieres hacer?"<<endl;
cout<<"1: suma"<<endl;
cout<<"2: resta"<<endl;
cout<<"3: multiplicacion"<<endl;
cin>>eleccion;
return eleccion;
}
int menuprincipal(){
cout << "\n--- Menú ---\n";
        cout << "1. Llenar matriz con valores ingresados por el usuario\n";
        cout << "2. Llenar matriz con valores aleatorios\n";
        cout << "3. Realizar operación en la matriz\n";
        cout << "4. Mostrar matriz\n";
        cout << "5. Borrar elemento de la matriz\n";
        cout << "6. Editar elemento de la matriz\n";
        cout << "7. Vaciar matriz\n";
        cout << "8. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;
return opcion;
}
int main (){
    do {
    cout<<"ingrese el numero de filas"<<endl;
    cin>>e;
    cout<<"ingrese el numero de columnas"<<endl;
    cin>>a;
    if (e<=10){
        if(a<=10){
int primero[e][a], segundo[e][a], suma[e][a],resta[e][a], multi[e][a];
do{
opcion=menuprincipal();
switch (opcion)
{
    case 1:
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                cout<<" ["<<i<<"]["<<j<<"] = ";
                cin>>primero[i][j];
        }
        cout<<"\n";
    }
cout<<"Ingrese matriz B :\n";
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                cout<<" ["<<i<<"]["<<j<<"] = ";
                cin>>segundo[i][j];
        }
    }

break;
case 2:
cout<<"LLenar matrices"<<endl;
break;
    case 3:
eleccion= menuoperaciones();
switch (eleccion)
{
case 1:
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                suma[i][j]=primero[i][j]+segundo[i][j];
        }
    }
 cout<<"\n";
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                cout<<" ["<<i<<"]["<<j<<"] = "<<suma[i][j]<<"\t";
        }
        cout<<"\n";
    }
    break;
case 2:
for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                resta[i][j]=primero[i][j]-segundo[i][j];
        }
    }
 cout<<"\n";
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                cout<<" ["<<i<<"]["<<j<<"] = "<<resta[i][j]<<"\t";
        }
        cout<<"\n";
    }
    break;
case 3:
for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                multi[i][j]=primero[i][j]*segundo[i][j];
        }
    }
 cout<<"\n";
    for(int i=0;i<e;i++){
        for(int j=0;j<a;j++){
                cout<<" ["<<i<<"]["<<j<<"] = "<<multi[i][j]<<"\t";
        }
        cout<<"\n";
    }
    break;
    case 4:

default:
    break;
}
break;
}
}while(opcion);
cout<<"quieres reiniciar el programa?"<<endl;
cout<<"1:Si, 2:NO"<<endl;
cin>>repetir;
        }
        else{
            cout<<"valor invalido de la columna"<<endl;
            cout<<"quieres reiniciar el programa?"<<endl;
        cout<<"1:Si, 2:NO"<<endl;
        cin>>repetir;
        }
    }
else{
cout<<"valor invalido de la fila"<<endl;
cout<<"quieres reiniciar el programa?"<<endl;
cout<<"1:Si, 2:NO"<<endl;
cin>>repetir;
}
}while(repetir==1);
cout<<"Perfecto Gracias por usar el programa"<<endl;

}