#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Explicación y ejemplo del if, else if, else
void mostrarIfElse() {
    cout << "\n=== ESTRUCTURA IF - ELSE IF - ELSE ===" << endl;
    cout << "La estructura if permite ejecutar un bloque de codigo si una condicion es verdadera." << endl;
    cout << "else if y else permiten manejar condiciones adicionales." << endl;

    int numero;
    cout << "\nEjemplo: determinar si un numero es positivo, negativo o cero." << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0)
        cout << "El numero es positivo." << endl;
    else if (numero < 0)
        cout << "El numero es negativo." << endl;
    else
        cout << "El numero es cero." << endl;
}

// Explicación y ejemplo del ciclo for
void mostrarFor() {
    cout << "\n=== CICLO FOR ===" << endl;
    cout << "El ciclo for se usa cuando conocemos el numero exacto de repeticiones." << endl;
    cout << "Estructura: for(inicializacion; condicion; incremento) {...}" << endl;

    cout << "\nEjemplo: mostrar los numeros del 1 al 5:" << endl;
    for (int i = 0; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Explicación y ejemplo del ciclo while
void mostrarWhile() {
    cout << "\n=== CICLO WHILE ===" << endl;
    cout << "El ciclo while ejecuta el bloque mientras la condicion sea verdadera." << endl;
    cout << "Estructura: while(condicion) {...}" << endl;

    cout << "\nEjemplo: mostrar los numeros del 1 al 5 usando while:" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

// Explicación y ejemplo del ciclo do while
void mostrarDoWhile() {
    cout << "\n=== CICLO DO WHILE ===" << endl;
    cout << "El ciclo do while ejecuta el bloque al menos una vez antes de verificar la condicion." << endl;
    cout << "Estructura: do {...} while(condicion);" << endl;

    cout << "\nEjemplo: mostrar los numeros del 1 al 5 usando do while:" << endl;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;
}

// Explicación y ejemplo de vectores
void mostrarVectores() {
    cout << "\n=== VECTORES ===" << endl;
    cout << "Un vector es una estructura que permite almacenar varios valores del mismo tipo." << endl;
    cout << "Estructura: vector<tipo> nombre = {valores};" << endl;

    cout << "\nEjemplo: almacenar y mostrar calificaciones." << endl;
    vector<float> notas = {4.5, 3.8, 5.0, 2.9};
    cout << "Notas almacenadas: ";
    for (int i = 0; i < notas.size(); i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
}

// Explicación del switch
void mostrarSwitch() {
    cout << "\n=== ESTRUCTURA SWITCH ===" << endl;
    cout << "El switch se usa cuando se quiere evaluar una variable con varios casos posibles." << endl;
    cout << "Estructura: switch(variable) { case valor: ... break; ... }" << endl;

    cout << "\nEjemplo: mostrar el dia de la semana segun un numero (1-7):" << endl;
    int dia;
    cout << "Ingrese un numero (1-7): ";
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
}

// Explicación de contador y acumulador
void mostrarContadorAcumulador() {
    cout << "\n=== CONTADOR Y ACUMULADOR ===" << endl;
    cout << "El contador incrementa en cada iteracion, mientras el acumulador suma valores." << endl;

    cout << "\nEjemplo: sumar los numeros del 1 al 5." << endl;
    int suma = 0;
    for (int i = 1; i <= 5; i++) {
        suma += i;
    }
    cout << "La suma de los numeros del 1 al 5 es: " << suma << endl;
}

// Explicación general del programa
void mostrarIntroduccion() {
    cout << "\n=== BIENVENIDO AL TUTORIAL INTERACTIVO DE C++ ===" << endl;
    cout << "Este programa muestra ejemplos y explicaciones de las estructuras basicas en C++." << endl;
    cout << "Podras aprender sobre: if, else if, else, for, while, do while, vectores, switch, contador y acumulador." << endl;
    cout << "Selecciona una opcion del menu para ver su explicacion y un ejemplo practico." << endl;
}

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

        switch (opcion) {
            case 1: mostrarIntroduccion(); break;
            case 2: mostrarIfElse(); break;
            case 3: mostrarFor(); break;
            case 4: mostrarWhile(); break;
            case 5: mostrarDoWhile(); break;
            case 6: mostrarVectores(); break;
            case 7: mostrarSwitch(); break;
            case 8: mostrarContadorAcumulador(); break;
            case 9: cout << "\nSaliendo del tutorial... ¡Gracias por aprender C++!" << endl; break;
            default: cout << "Opcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 9);

    return 0;
}
