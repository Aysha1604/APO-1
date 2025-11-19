#include <iostream>
#include <vector>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n=== BIENVENIDO AL TUTORIAL INTERACTIVO DE C++ ===" << endl;

        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Introduccion" << endl;
        cout << "2. If, Else If, Else" << endl;
        cout << "3. Ciclo For" << endl;
        cout << "4. Ciclo While" << endl;
        cout << "5. Ciclo Do While" << endl;
        cout << "6. Vectores" << endl;
        cout << "7. Switch" << endl;
        cout << "8. Contador y Acumulador" << endl;
        cout << "9. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "\n=== INTRODUCCION ===" << endl;
            cout << "Este programa muestra ejemplos y explicaciones de las estructuras basicas en C++." << endl;
            cout << "Incluye: if, else if, else, for, while, do while, vectores, switch, contador y acumulador." << endl;

        } else if (opcion == 2) {
            cout << "\n=== ESTRUCTURA IF - ELSE IF - ELSE ===" << endl;
            cout << "Sirve para tomar decisiones dependiendo de una condicion." << endl;

            int numero;
            cout << "\nEjemplo: determine si un numero es positivo, negativo o cero." << endl;
            cout << "Ingrese un numero: ";
            cin >> numero;

            if (numero > 0)
                cout << "El numero es positivo." << endl;
            else if (numero < 0)
                cout << "El numero es negativo." << endl;
            else
                cout << "El numero es cero." << endl;

        } else if (opcion == 3) {
            cout << "\n=== CICLO FOR ===" << endl;
            cout << "Se usa cuando sabemos cuantas veces se repetira el ciclo." << endl;

            cout << "\nEjemplo: mostrar los numeros del 1 al 5:" << endl;
            for (int i = 1; i <= 5; i++) {
                cout << i << " ";
            }
            cout << endl;

        } else if (opcion == 4) {
            cout << "\n=== CICLO WHILE ===" << endl;
            cout << "Repite mientras la condicion sea verdadera." << endl;

            cout << "\nEjemplo: mostrar los numeros del 1 al 5:" << endl;
            int i = 1;
            while (i <= 5) {
                cout << i << " ";
                i++;
            }
            cout << endl;

        } else if (opcion == 5) {
            cout << "\n=== CICLO DO WHILE ===" << endl;
            cout << "Ejecuta el bloque al menos una vez antes de evaluar la condicion." << endl;

            cout << "\nEjemplo: mostrar los numeros del 1 al 5:" << endl;
            int i = 1;
            do {
                cout << i << " ";
                i++;
            } while (i <= 5);
            cout << endl;

        } else if (opcion == 6) {
            cout << "\n=== VECTORES ===" << endl;
            cout << "Un vector almacena multiples valores del mismo tipo." << endl;

            cout << "\nEjemplo: mostrar un vector de notas:" << endl;
            vector<float> notas = {4.5, 3.8, 5.0, 2.9};
            cout << "Notas: ";
            for (int i = 0; i < notas.size(); i++) {
                cout << notas[i] << " ";
            }
            cout << endl;

        } else if (opcion == 7) {
            cout << "\n=== SWITCH ===" << endl;
            cout << "Permite escoger entre varios casos." << endl;

            int dia;
            cout << "\nEjemplo: mostrar el dia segun un numero (1-7)." << endl;
            cout << "Ingrese un numero: ";
            cin >> dia;

            switch (dia) {
                case 1: cout << "Lunes"; break;
                case 2: cout << "Martes"; break;
                case 3: cout << "Miercoles"; break;
                case 4: cout << "Jueves"; break;
                case 5: cout << "Viernes"; break;
                case 6: cout << "Sabado"; break;
                case 7: cout << "Domingo"; break;
                default: cout << "Numero no valido"; break;
            }
            cout << endl;

        } else if (opcion == 8) {
            cout << "\n=== CONTADOR Y ACUMULADOR ===" << endl;
            cout << "Contador: aumenta en cada interacion.\nAcumulador: suma un valor." << endl;

            cout << "\nEjemplo: sumar los numeros del 0 al 5." << endl;

            int suma = 0;
            for (int i = 0; i <= 5; i++) {
                suma += i;
            }

            cout << "La suma total es: " << suma << endl;

        } else if (opcion == 9) {
            cout << "\nSaliendo del tutorial... ¡Gracias por aprender C++!" << endl;
        } else {
            cout << "Opcion no valida, intente de nuevo." << endl;
        }

    } while (opcion != 9);

    return 0;
}