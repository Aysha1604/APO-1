#include <iostream>
using namespace std;

int main(){
    int filas;

    cout << "Ingrese numero de filas para el triangulo: ";

cin >> filas;

    for (int i = 1; i <= filas; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}