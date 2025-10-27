#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string pais;

    cout << "ingrese el numero de ciclistas: ";
    cin >> N;

for (int i = 1; i <= N; i++){
    cout << "\nCiclista " << i << " - ingrese su pais: "; 
    cin >> pais;

    if (pais == "Cuba") cout << "chivo\n";
    else if (pais == "argentina") cout << "bici\n";
    else if (pais == "chile") cout << "bici o chancha\n";
    else if (pais == "EEUU") cout << "bike\n";
    else if (pais == "brasil") cout << "magrela\n";
    else if (pais == "costarica") cout << "cleta\n";
    else if (pais == "mexico") cout << "bici, cleta o baika\n";
    else if (pais == "guatemala") cout << "birula\n";
    else if (pais == "ecuador") cout << "huesuda\n";
    else if (pais == "uruguay") cout << "chiva\n";
    else if (pais == "peru") cout << "bici\n";
    else cout << "no registrado\n";

}
}
