#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    char cual;
    int x, y;
    
    cout << "Bienvenid@ a este programa de operaciones lógicas... Espero te sea útil" << endl;
    cout << "Primero proporciona cuántos elementos tendrá tu primer conjunto mínimo 5" << endl;
    cin >> x;
    
    while (x < 5) {
        cout << "Ese número no es válido, intente de nuevo" << endl;
        cin >> x;
    }
    
    cout << "Ahora, ¿cuántos elementos tendrá tu segundo conjunto? mínimo 5" << endl;
    cin >> y;
    
    while (y < 5) {
        cout << "Ese número no es válido, intente de nuevo" << endl;
        cin >> y;
    }

    vector<char> a(x);
    vector<char> b(y);

    int opcion;
    
    cout << "Pasaremos al menú para que selecciones las operaciones y acciones" << endl;
    
    do {
        cout << "\n1. Meter valores \n2. Borrado y edición de elementos\n3. Vaciado de conjuntos\n"
             << "4. Unión\n5. Intersección\n6. Diferencia\n7. Complemento\n8. Imprimir\n9. Salir\n"
             << "Seleccione una opción:" << endl;
        
        cin >> opcion;

        switch (opcion) {
            case 1: {// Meter valores
                char valor;
                int lugar, num;
                cout << "En qué conjunto deseas meter los valores, en el 'x'( primero) o 'y' (segundo)" << endl;
                cin >> cual;

                if (cual == 'x') {
                    for (int i = 0; i < x; i++) {
                        cout << "Ingresa el carácter que deseas:" << endl;
                        cin >> valor;
                        a[i] = valor;
                    }
                } else if (cual == 'y') {
                    for (int i = 0; i < y; i++) {
                        cout << "Ingresa el carácter que deseas:" << endl;
                        cin >> valor;
                        b[i] = valor;
                    }
                } else {
                    cout << "Valor incorrecto, introduzca uno que sea válido" << endl;
                }
                break;
            }

            case 2: {// Borrado y edición de elementos
                int lugar, num;
                cout << "¿Qué conjunto deseas modificar? 'x' para el primero, 'y' para el segundo" << endl;
                cin >> cual;

                if (cual == 'x') {
                    cout << "Ingresa la posición que deseas modificar o borrar empezando del 0" << endl;
                    cin >> lugar;

                    if (lugar >= 0 && lugar < x) {
                        cout << "Ahora pon tu número nuevo" << endl;
                        cin >> num;
                        a[lugar] = num;
                    }
                } else if (cual == 'y') {
                    cout << "Ingresa la posición que deseas modificar o borrar empezando del 0" << endl;
                    cin >> lugar;

                    if (lugar >= 0 && lugar < y) {
                        cout << "Ahora pon tu carácter nuevo" << endl;
                        cin >> num;
                        b[lugar] = num;
                    }
                } else {
                    cout << "Valor incorrecto, introduzca uno que sea válido" << endl;
                }
                break;
            }

            case 3: {// Vaciar
                cout << "¿Cuál conjunto deseas vaciar? 'x' para el primero, 'y' para el segundo" << endl;
                cin >> cual;

                if (cual == 'x') {
                    for (int i = 0; i < x; i++) {
                        a[i] = 0;
                    }
                } else if (cual == 'y') {
                    for (int i = 0; i < y; i++) {
                        b[i] = 0;
                    }
                } else {
                    cout << "Valor incorrecto, introduzca uno que sea válido" << endl;
                }
                break;
            }

            case 4: {// Unión
                vector<char> univector(a.size() + b.size());
                vector<char>::iterator it;

                sort(a.begin(), a.end());
                sort(b.begin(), b.end());

                it = set_union(a.begin(), a.end(), b.begin(), b.end(), univector.begin());
                univector.resize(it - univector.begin());

                cout << "La unión de vectores es: ";
                for (char const& c : univector) {
                    cout << c << " ";
                }
                cout << endl;
                break;
            }

            case 5: {// Intersección
                vector<char> invector(a.size() + b.size());
                vector<char>::iterator it;

                sort(a.begin(), a.end());
                sort(b.begin(), b.end());

                it = set_intersection(a.begin(), a.end(), b.begin(), b.end(), invector.begin());
                invector.resize(it - invector.begin());

                cout << "La intersección de vectores es: ";
                for (char const& c : invector) {
                    cout << c << " ";
                }
                cout << endl;
                break;
            }

            case 6: {// Diferencia
                vector<char> difvector(a.size() + b.size());
                vector<char>::iterator it;

                sort(a.begin(), a.end());
                sort(b.begin(), b.end());

                it = set_difference(a.begin(), a.end(), b.begin(), b.end(), difvector.begin());
                difvector.resize(it - difvector.begin());

                cout << "La diferencia de vectores es: ";
                for (char const& c : difvector) {
                    cout << c << " ";
                }
                cout << endl;
                break;
            }

            case 7: {// Complemento
                break;
            }

            case 8: {// Imprimir
                cout << "¿Qué conjunto deseas imprimir? 'x' para el primero, 'y' para el segundo" << endl;
                cin >> cual;

                if (cual == 'x') {
                    for (int i = 0; i < x; i++) {
                        cout << a[i] << ",";
                    }
                    cout << endl;
                } else if (cual == 'y') {
                    for (int i = 0; i < y; i++) {
                        cout << b[i] << ",";
                    }
                    cout << endl;
                } else {
                    cout << "Valor incorrecto, introduzca uno que sea válido" << endl;
                }
                break;
            }

           
