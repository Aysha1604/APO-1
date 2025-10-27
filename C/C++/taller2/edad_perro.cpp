// taller estructuras repetitivas c++

#include <iostream>
using namespace std;

int main (){
    int edad;
    cout << "ingrese la edad del perro (0 para salir): ";
    cin >> edad;

    while (edad > 0 ){
        switch (edad)
        {
        case 1: cout << "equivale a 10 años humanos\n"; break;
        case 2: cout << "equivale a 20 años humanos\n"; break;
        case 3: cout << "equivale a 32 años humanos\n "; break;
        case 4: cout << "equivale a 43 años humanos\n"; break;
        case 5: cout << "equivale a 53 años humanos\n"; break;
        case 6: cout << "equivale a 62 años humanos\n"; break;
        case 7: cout << "equivale a 70 años humanos\n"; break;
        case 8: cout << "equivale a 75 años humanos\n"; break;
        case 9: cout << "equivale a 78 años humanos\n"; break;
        case 10: cout << "equivale 80 a años humanos\n"; break;
        default: cout << "equivale a mas de 80 años humanos\n";

           
        }
        cout << "\nIngrese otra edad (0 para salir): ";
        cin >> edad;
    }

    return 0;
}