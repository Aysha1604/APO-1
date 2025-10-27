#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 5; // Tamaño del vector
    int vector[TAMANO];
    
    cout << "=== INGRESAR Y MOSTRAR ELEMENTOS DE UN VECTOR ===" << endl;
    
    // Ingresar elementos al vector usando for
    cout << "Ingrese " << TAMANO << " elementos del vector:" << endl;
    for(int i = 0; i < TAMANO; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vector[i];
    }
    
    // Mostrar elementos del vector usando for
    cout << "\nElementos del vector:" << endl;
    for(int i = 0; i < TAMANO; i++) {
        cout << "vector[" << i << "] = " << vector[i] << endl;
    }
    
    // Mostrar en formato de lista
    cout << "\nVector: [ ";
    for(int i = 0; i < TAMANO; i++) {
        cout << vector[i];
        if(i < TAMANO - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;
    
    return 0;
}