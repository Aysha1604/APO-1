// Punto 6: positivo, negativo o cero
#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n > 0) cout << "El numero es positivo.\n";
    else if (n < 0) cout << "El numero es negativo.\n";
    else cout << "El numero es cero.\n";

    return 0;
}
