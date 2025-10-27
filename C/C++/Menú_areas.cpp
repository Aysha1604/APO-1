// Punto 4: Menú áreas
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int opcion;
    const double PI = acos(-1.0);

    do {
        cout << "\n--- CALCULO DE AREAS ---\n";
        cout << "1) Area de un circulo\n";
        cout << "2) Area de un rectangulo\n";
        cout << "3) Area de un triangulo\n";
        cout << "4) Salir\n";
        cout << "Ingrese opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            double r;
            cout << "Radio: ";
            cin >> r;
            cout << "Area = " << fixed << setprecision(4) << PI * r * r << endl;
        } else if (opcion == 2) {
            double a, b;
            cout << "Base: "; cin >> a;
            cout << "Altura: "; cin >> b;
            cout << "Area = " << fixed << setprecision(4) << a * b << endl;
        } else if (opcion == 3) {
            double base, altura;
            cout << "Base: "; cin >> base;
            cout << "Altura: "; cin >> altura;
            cout << "Area = " << fixed << setprecision(4) << 0.5 * base * altura << endl;
        } else if (opcion == 4) {
            cout << "Saliendo...\n";
        } else {
            cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
