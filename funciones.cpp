void validar(){//funcion para valdar los datos
if (cin.fail()) {                     // validacion del menu 
            cout << "Opcion no valida"<<endl;
            cout <<endl;
            cin.clear(); // Restablecer el estado de cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer de entrada
     }
}
int ingresararreglo(int arreglo[], int tamano, int valor){
    if(valor>=tamano){
        return 1;
    }
    cout<<"Ingrese el valor para el arreglo"<<endl;
    cin>>arreglo[valor];
    validar();
    ingresararreglo(arreglo, tamano, valor +1);
}
int vaciar(int arreglo[], int tamano, int valor){
    if(valor>=tamano){
        return 1;
    }
    arreglo[valor]=0;
    vaciar(arreglo, tamano, valor +1);
}
int imprimirarreglo(int arreglo[], int tamano, int valor){
    if(valor>=tamano){
        return 1;
    }
    cout<<arreglo[valor]<<endl;
    imprimirarreglo(arreglo, tamano, valor +1);
}

void menu(){
    do{
    cout<<"Binvenido"<<endl;
    cout<<"Que quieres hacer?"<<endl;
    cout<<"1.-ingrsar datos"<<endl;
    cout<<"2.-mostrar datos"<<endl;
    cout<<"3.-vaciar arreglo"<<endl;
    cout<<"4.-Salir del programa"<<endl;
    cin>>desicion;
    validar();
    if(desicion>4){
        cout<<"Opcion invalida"<<endl;
    }
    if(desicion<1){
        cout<<"Opcion invalida"<<endl;
    }
    }
    while(desicion>4);
}