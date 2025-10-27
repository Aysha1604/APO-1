// Punto 5: Calculadora con las 4 operaciones básicas (menu)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opcion;
    double x, y;
    do {
        cout << "\n--- OPERACIONES BASICAS ---\n";
        cout << "1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n5) Salir\n";
        cout << "Ingrese opcion: ";
        cin >> opcion;
        if (opcion >=1 && opcion <=4) {
            cout << "Ingrese el primer numero: ";
            cin >> x;
            cout << "Ingrese el segundo numero: ";
            cin >> y;
        }
        switch(opcion) {
            case 1: cout << "Resultado: " << (x + y) << endl; break;
            case 2: cout << "Resultado: " << (x - y) << endl; break;
            case 3: cout << "Resultado: " << (x * y) << endl; break;
            case 4:
                if (y == 0.0) cout << "Error: division por cero.\n";
                else cout << "Resultado: " << (x / y) << endl;
                break;
            case 5: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n";
        }
    } while (opcion != 5);

    return 0;
}
