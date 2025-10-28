#include <iostream>                                                                                                                                                           #include <iostream>
using namespace std;

int main() {
    int numeros[5] = {8, 3, 15, 2, 10};
    int buscado;
    bool encontrado = false;

    cout << "Ingrese el numero a buscar: ";
    cin >> buscado;

    // Búsqueda lineal
    for(int i = 0; i < 5; i++){
        if(numeros[i] == buscado){
            encontrado = true;
            break;  // sale del ciclo si lo encuentra
        }
    }

    if(encontrado){
        cout << "El numero SI esta en el vector." << endl;
    } else {
        cout << "El numero NO esta en el vector." << endl;
    }

    return 0;
}