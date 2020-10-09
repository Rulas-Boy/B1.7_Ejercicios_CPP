#include <iostream>
using namespace std;

float PulgadasAYardas(float In) {
    return In * (1.0F / 36.0F);
}

float PiesAPulgadas(float Ft) {
    return Ft * 12;
}

int main() {
    int Opc;
    float Num;

    cout << "Seleccione la acción que va a realizar\n";
    cout << "1) Convertir de pulgadas a yardas.\n";
    cout << "2) Convertir de pies a pulgadas\n\n";
    cout << "Seleccione una opción: ";
    cin >> Opc;

    switch (Opc)
    {
        case 1:
            cout << "Ingrese las pulgadas que quiere convertir: ";
            cin >> Num;
            cout << "\nYardas: " << PulgadasAYardas(Num);
            break;
        case 2:
            cout << "Ingrese los pies que quiere convertir: ";
            cin >> Num;
            cout << "\nPulgadas: " << PiesAPulgadas(Num);
            break;
        default:
            cout << "Esa no es una opción válida.\nVuelva a correr el programa.";
            break;
    }

    return 0;
}
