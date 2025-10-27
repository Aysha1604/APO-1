//taller estructuras repetitivas c++
# include <iostream>
# include <iomanip>
using namespace std;

int main (){

    int N; 
    double kilos;
    cout << "ingrese la cantidad de productos: ";
    cin >> N;

    for(int i = 0; i <= N; i++){
        cout << "\nProducto" << i << " - ingrese peso en kilos: ";
        cin >> kilos;

        double libras = kilos * 2.2046; 
        double gramos = kilos * 1000;
        double onzas = gramos / 28.35;
        double miligramos = kilos * 1000000;

        cout << fixed << setprecision(2);
        cout << "peso en libras: " << libras << endl;
        cout << "peso en gramos: " << gramos << endl;
        cout << "peso en onzas: " << onzas << endl;
        cout << "peso en miligramos: " << miligramos << endl;


    }

    return 0;


}
