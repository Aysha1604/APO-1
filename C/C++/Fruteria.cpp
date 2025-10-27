// Punto 2: Descuento según kilos comprados
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double precioPorKilo, kilos;
    cout << "Precio por kilo: $";
    cin >> precioPorKilo;
    cout << "Kilos comprados: ";
    cin >> kilos;

    double subtotal = precioPorKilo * kilos;
    double descuento = 0.0;

    if (kilos <= 2.0) {
        descuento = 0.0;
    } else if (kilos <= 5.0) {
        descuento = 0.10; // 10%
    } else if (kilos <= 10.0) {
        descuento = 0.15; // 15%
    } else {
        descuento = 0.20; // 20%
    }

    double total = subtotal * (1.0 - descuento);

    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "Descuento aplicado: " << (descuento * 100) << "%\n";
    cout << "Total a pagar: $" << total << endl;
    return 0;
}
