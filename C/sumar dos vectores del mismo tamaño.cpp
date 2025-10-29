#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], suma[n];

    cout << "\nIngrese los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "\nIngrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    // Sumar elemento a elemento
    for (int i = 0; i < n; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    cout << "\nResultado de la suma de los vectores:\n";
    for (int i = 0; i < n; i++) {
        cout << suma[i] << " ";
    }
    cout << endl;

    return 0;
}