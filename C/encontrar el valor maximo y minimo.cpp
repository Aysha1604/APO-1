#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int maximo, minimo;

    // Pedir los números al usuario
    cout << "Ingresa 5 numeros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Inicializar maximo y minimo con el primer valor
    maximo = numeros[0];
    minimo = numeros[0];

    // Recorrer el vector para encontrar máximo y mínimo
    for(int i = 1; i < 5; i++) {
        if(numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if(numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    cout << "\nEl valor maximo es: " << maximo << endl;
    cout << "El valor minimo es: " << minimo << endl;

    return 0;
}