#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int vector[n];

    cout << "\nIngrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    cout << "\nVector original: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    // Invertir el vector
    for (int i = 0; i < n / 2; i++) {
        int temp = vector[i];
        vector[i] = vector[n - 1 - i];
        vector[n - 1 - i] = temp;
    }

    cout << "\nVector invertido: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }

    cout << endl;
    return 0;
}