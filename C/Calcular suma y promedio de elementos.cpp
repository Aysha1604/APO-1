#include <iostream>
using namespace std;

int main() {
    const int TAMANO = 5;
    int vector[TAMANO];
    int suma = 0;
    float promedio;
    
    cout << "=== CALCULAR SUMA Y PROMEDIO DE ELEMENTOS ===" << endl;
    
    // Ingresar elementos
    cout << "Ingrese " << TAMANO << " numeros:" << endl;
    for(int i = 0; i < TAMANO; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> vector[i];
    }
    
    // Calcular suma usando for
    for(int i = 0; i < TAMANO; i++) {
        suma += vector[i]; // suma = suma + vector[i]
    }
    
    // Calcular promedio
    promedio = static_cast<float>(suma) / TAMANO;
    
    // Mostrar resultados
    cout << "\n=== RESULTADOS ===" << endl;
    
    // Mostrar vector
    cout << "Vector: [ ";
    for(int i = 0; i < TAMANO; i++) {
        cout << vector[i];
        if(i < TAMANO - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;
    
    // Mostrar suma y promedio
    cout << "Suma de los elementos: " << suma << endl;
    cout << "Promedio de los elementos: " << promedio << endl;
    
    return 0;
}