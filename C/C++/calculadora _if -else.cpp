// Punto 8: Calculadora que acepta signo o palabra
#include <iostream>
#include <string>
using namespace std;

int main() {
    double a, b;
    string op;
    cout << "Ingrese primer numero: "; cin >> a;
    cout << "Ingrese segundo numero: "; cin >> b;
    cout << "Operacion (+, -, *, /) o palabras (suma, resta, mult, div): ";
    cin >> op;

    // normalizar a minúsculas (opcional simple)
    for (char &c : op) c = tolower(c);

    if (op == "+" || op == "suma" || op == "sum") {
        cout << "Resultado: " << (a + b) << endl;
    } else if (op == "-" || op == "resta" || op == "minus") {
        cout << "Resultado: " << (a - b) << endl;
    } else if (op == "*" || op == "mult" || op == "multiplicacion") {
        cout << "Resultado: " << (a * b) << endl;
    } else if (op == "/" || op == "div" || op == "division") {
        if (b == 0.0) cout << "Error: division por cero.\n";
        else cout << "Resultado: " << (a / b) << endl;
    } else {
        cout << "Operacion no reconocida.\n";
    }
    return 0;
}
