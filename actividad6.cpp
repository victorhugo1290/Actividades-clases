/************PRESENTACION************
 NOMBRE: Victor Hugo Gutierrez Alvarado
 FECHA: 7/Marzo/2024
 PROGRAMA: Actividad6.cpp
 CENTRO UNIVERSITARIO DE LOS ALTOS/ UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACIón/ 2do SEMESTRE
 PROFESOR: Carlos Javier Cruz Franco
 DESCRIPCION: Suma, resta y multiplicacion de matrices
***************************************/
#include <iostream>//librerias
#include <limits>
using namespace std;
int e, a, repetir, opcion, eleccion, fila, columna, valor, matriz,decision, i, j;//declaracion de variables
void validar(){//funcion para valdar los datos
if (cin.fail()) {                     // validacion del menu 
            cout << "Opcion no valida"<<endl;
            cout <<endl;
            cin.clear(); // Restablecer el estado de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
     }
}
int menuoperaciones(){//funcion para el menu de opercaciones
cout<<"que quieres hacer?"<<endl;
cout<<"1: suma"<<endl;
cout<<"2: resta"<<endl;
cout<<"3: multiplicacion"<<endl;
cin>>eleccion;
validar();
return eleccion;
}
int menuprincipal(){//funcion para el menu principal
cout << "\n--- Menú ---\n";
        cout << "1. Llenar matriz con valores ingresados por el usuario"<<endl;
        cout << "2. Llenar matriz con valores aleatorios"<<endl;
        cout << "3. Realizar operación en la matriz"<<endl;
        cout << "4. Mostrar matriz"<<endl;
        cout << "5. Borrar elemento de la matriz"<<endl;
        cout << "6. Editar elemento de la matriz"<<endl;
        cout << "7. Vaciar matriz"<<endl;
        cout << "Ingrese su opción: "<<endl;
        cin >> opcion;
        validar();
return opcion;
}
int main (){//inicio del programa
    do//ciclo del programa
    {
        cout<<"ingrese el numero de filas"<<endl;//pedir el tamaño de la matriz
            cin>>e;
            validar();
            cout<<"ingrese el numero de columnas"<<endl;
            cin>>a;
            validar();
            if (e<=10 && e>1){//validar que este entre los parametros permitidos
                if(a<=10 && a>1){
        int primero[e][a], segundo[e][a], suma,suma2,resta2,resultado,resultado2,resta, multi[e][a];//variables de las matrices
            {
                    {
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0; j<a; j++)
                            {
                                primero[i][j] = 0;//vaciado de las matrices
                            }
                        }
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0; j<a; j++)
                            {
                                segundo[i][j] = 0;
                            }
                        }
                    }
        }
        do{
        opcion=menuprincipal();
        switch (opcion)//switch para la eleccion en el menu principal
        {
            case 1:
            {
                    int fila, columna, valor, matriz; 
                    cout<<"Matriz 1 o Matriz 2"<<endl;
                    cin>>matriz;
                    validar();
                    if (matriz == 1)
                    {
                        cout<<"Ingrese la fila: "<<endl;
                        cin>>fila;
                        validar();
                        cout<<"Ingrese la columna: "<<endl;
                        cin>>columna;
                        validar();
                        cout<<"Ingrese el numero: "<<endl;
                        cin>>valor;
                        validar();
                        if (fila >= 0 && fila < e && columna >= 0 && columna < a)
                        {
                            primero[fila][columna] = valor;//el usuario ingresa el valor deseado
                            cout<< "Valor ingresado de manera correcta"<<endl;
                        }

                        else
                        {
                            cout<<"Posición invalida"<<endl;
                        }
                    }
                    else if (matriz == 2)
                    {
                        cout << "Ingrese la fila: "<<endl;
                        cin >> fila;
                        validar();
                        cout << "Ingrese la columna: "<<endl;
                        cin >> columna;
                        validar();
                        cout << "Ingrese el numero: "<<endl;
                        cin >> valor;
                        validar();
                        if (fila >= 0 && fila < e && columna >= 0 && columna < a)
                        {
                            segundo[fila][columna] = valor;
                            cout<< "Valor ingresado de manera correcta"<<endl;
                        }
            }
            }
                    break;
                case 2://llenado aleatorio de las matrices
                {
                    cout<<"Que matriz quieres llenar la 1 o 2 "<< endl;
                    cin >> decision;
                    validar();
                    if (decision==1)
                    {
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0; j<a; j++)
                            {
                                primero[i][j] = rand()%201-100;
                            }
                        }
                    }
                    else if (decision==2)
                    {
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0;j<a;j++)
                            {
                                segundo[i][j]=rand()%201-100;
                            }
                        }
                    }
                    else
                    {
                        cout<<"Invalido"<<endl;
                    }
                }
                break;
                case 3://menu de operaciones
                {
            eleccion= menuoperaciones();
        switch (eleccion)
            {   
            case 1://la realizacion de la suma
            {
            suma=0;
            suma2=0;
            for(int i=0;i<e;i++){
                for(int j=0;j<a;j++){
                        suma=suma+primero[i][j];
                }
            }
            for(int i=0;i<e;i++){
                for(int j=0;j<a;j++){
                        suma2=suma2+segundo[i][j];
                }
            }
            resultado=suma+suma2;
        cout<<"La suma es: "<<resultado<<endl;
            }
            break;
        case 2://la realizacion de la resta
        {
        resta=0;
        resta2=0;
        for(int i=0;i<e;i++){
                for(int j=0;j<a;j++){
                        resta=resta+primero[i][j];
                }
            }
            for(int i=0;i<e;i++){
                for(int j=0;j<a;j++){
                        resta2=resta2+segundo[i][j];
                }
            }
            resultado2=resta-resta2;
            cout<<"El resultado es: "<<resultado2<<endl;
        }
            break;
        case 3://la realizacion de la multiplicacion
        {
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
            }
            }
            break;
            case 4://opcion para imprimir las matrices
                    cout<<"Que matriz quieres imprimir la 1 o 2 "<< endl;
                    cin>>decision;
                    validar();
                    if (decision == 1)
                    {
                                        for (int i = 0; i < e; i++)
                    {
                                    for (int j = 0; j < a; j++)
                        {
                            cout << primero[i][j] << ' ';
                        }
                    cout <<" "<<endl;
                        }
                    }
                    else if (decision == 2)
                    {
                        for (int i = 0; i < e; i++)
                        {
                            for (int j = 0; j < a; j++)
                            {
                                cout << segundo[i][j] << ' ';
                            }
                            cout <<" "<<endl;
                        }
                    }
                    else
                    {
                        cout<<"Invalido"<<endl;
                    }
                break;
            case 5://opcion para eliminar elementos de las matrices
            cout<<"De que matriz quieres eliminar 1 o 2"<<endl;
            cin>>matriz;
            validar();
            if (matriz=1)
            {
               cout<<"que posicion quieres eliminar"<<endl;
               for (int i = 0; i < e; i++)
                    {
                                    for (int j = 0; j < a; j++)
                        {
                            cout<<" ["<<i<<"]["<<j<<"] = "<< primero[i][j] << ' ';
                        }
                    cout <<" "<<endl;
                        }
                cout<<"ingrese la fila"<<endl;
                cin>>fila;
                validar();
                cout<<"ingrese la columna"<<endl;
                cin>>columna;
                validar();
                primero[fila][columna]=0;
                cout<<"Se elimino de manera correcta"<<endl;
            }
            else if (matriz=2)
            {
                {
               cout<<"que posicion quieres eliminar"<<endl;
               for (int i = 0; i < e; i++)
                    {
                                    for (int j = 0; j < a; j++)
                        {
                            cout<<" ["<<i<<"]["<<j<<"] = "<<segundo[i][j] << ' ';
                        }
                    cout <<" "<<endl;
                        }
                cout<<"ingrese la fila"<<endl;
                cin>>fila;
                validar();
                cout<<"ingrese la columna"<<endl;
                cin>>columna;
                validar();
                segundo[fila][columna]=0;
                cout<<"se elimino de manera correcta"<<endl;
            }
            }
                    break;
                case 6://opcion para editar los valores de las matrices
                 cout<<"De que matriz quieres editar 1 o 2"<<endl;
            cin>>matriz;
            validar();
            if (matriz=1)
            {
               cout<<"que posicion quieres editar"<<endl;
               for (int i = 0; i < e; i++)
                    {
                                    for (int j = 0; j < a; j++)
                        {
                            cout<<" ["<<i<<"]["<<j<<"] = "<< primero[i][j] << ' ';
                        }
                    cout <<" "<<endl;
                        }
                cout<<"ingrese la fila"<<endl;
                cin>>fila;
                validar();
                cout<<"ingrese la columna"<<endl;
                cin>>columna;
                validar();
                cout<<"ingrese el nuevo valor"<<endl;
                cin>>valor;
                validar();
                primero[fila][columna]=valor;
                cout<<"Se edito de manera correcta"<<endl;
            }
            else if (matriz=2)
            {
                {
               cout<<"que posicion quieres editar"<<endl;
               for (int i = 0; i < e; i++)
                    {
                                    for (int j = 0; j < a; j++)
                        {
                            cout<<" ["<<i<<"]["<<j<<"] = "<<segundo[i][j] << ' ';
                        }
                    cout <<" "<<endl;
                        }
                cout<<"ingrese la fila"<<endl;
                cin>>fila;
                validar();
                cout<<"ingrese la columna"<<endl;
                cin>>columna;
                validar();
                cout<<"ingrse el nuevo valor"<<endl;
                cin>>valor;
                validar();
                segundo[fila][columna]=valor;
                cout<<"se edito de manera correcta"<<endl;
            }
            }
                break;
                case 7://opcion para el vaciado de las matrices
                int x;
                    cout << "que matriz quieres vaciar 1 o 2 " << endl;
                    cin >> x;
                    validar();
                    if (x == 1)
                    {
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0; j<a; j++)
                            {
                                primero[i][j]=0;
                            }
                        }
                    }
                    else if (x==2)
                    {
                        for (int i=0; i<e; i++)
                        {
                            for (int j=0; j<a; j++)
                            {
                                segundo[i][j]=0;
                            }
                        }
                    }
                break;
                }
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
    } while (repetir==1);
    cout<<"perfecto, gracias por usar el programa"<<endl;
}