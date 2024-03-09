#include <iostream>
using namespace std;
int opcion,cele,cantidad,sino,e, numerito=0, decision;
char entrada;
 string conjunto[20], conjunto2[20];
int menuprincipal(){
cout << "\n--- Menú ---\n";
        cout << "1. ingresar conjunto"<<endl;
        cout << "3. Realizar operación con los conjuntos"<<endl;
        cout << "4. Mostrar conjuntos"<<endl;
        cout << "5. Borrar elemento del conjunto"<<endl;
        cout << "6. Editar elemento del conjunto"<<endl;
        cout << "7. Vaciar conjunto"<<endl;
        cout << "8. Salir"<<endl;
        cout << "Ingrese su opción: "<<endl;
        cin >> opcion;
return opcion;
}
int main (){
    do
    {
        cout<<"Cual es la cantidad de elemento que quiere ingresar en el conjunto?"<<endl;
    cin>>cantidad;
    if (cantidad>=5)
    {
        do
        {
             opcion=menuprincipal();
    switch (opcion)
    {
    case 1:
        cout<<"quieres ingresar en el conjunto 1 o 2"<<endl;
        cin>>cele;
        if (cele=1)
        {
            cout<<"Ingrese el elemento del conjunto"<<endl;
            if (numerito<cantidad)
            {
                 cin>>conjunto[numerito];
                 numerito++;
            }
            else if(numerito>=cantidad){cout<<"ya esta lleno el conjunto"<<endl;}
        }
        
        break;
    case 2:
     cout<<"Que conjunto quieres imprimir 1 o 2"<< endl;
                    cin>>decision;
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
                                cout << conjunto2[i] << ' ';
                
                            cout <<" "<<endl;
                        }
                    }
    break;
    default:
        break;
    }
        } while (opcion<8);
    }
    else
    {
        cout<<"Debe ser mayor a o igual a 5"<<endl;
    }
    }while(cantidad<5);
   





}