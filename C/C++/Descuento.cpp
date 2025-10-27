// Punto 1: Descuento en almacén
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double precio;
    cout << "Ingrese el precio: $";
    cin >> precio;

    double total = precio;
    if (precio > 200.0) {
        total = precio * 0.80; // aplica 20% de descuento
    }

    cout << fixed << setprecision(2);
    cout << "Total a pagar: $" << total << endl;
    return 0;
}
