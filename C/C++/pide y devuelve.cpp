// Punto 9: Cociente de division entera con chequeo de divisor
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el dividendo (entero): "; cin >> a;
    cout << "Ingrese el divisor (entero): ";  cin >> b;

    if (b == 0) {
        cout << "Error: el divisor es cero. No se puede dividir.\n";
    } else {
        int cociente = a / b;   // division entera
        int resto = a % b;
        cout << "Cociente (entero): " << cociente << "\n";
        cout << "Resto: " << resto << "\n";
    }
    return 0;
}
