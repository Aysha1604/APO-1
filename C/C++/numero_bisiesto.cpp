// Punto 7: Año bisiesto
#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    // Regla: divisible por 400 o (divisible por 4 y no por 100)
    return (anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0);
}

int main() {
    int anio;
    cout << "Ingrese el anio: ";
    cin >> anio;
    if (esBisiesto(anio)) cout << anio << " es bisiesto.\n";
    else cout << anio << " no es bisiesto.\n";
    return 0;
}
