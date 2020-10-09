#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    // Declaración de variables
    bool Aleatorio;
    int Opc, N;

    cout << "Programa que determina si una serie de números son pares o impraes.\n";
    cout << "¿Cómo desea el ingreso de números?\n";
    cout << "1) Manualmente\n";
    cout << "2) Aleatoriamente (Entre 0 y 100)\n\n";
    cout << "Seleccione una opción: ";
    cin >> Opc;

    Aleatorio = (Opc == 1) ? false : true;

    cout << "\n¿Cuántos números desea ingresar? ";
    cin >> N;

    // Declaración del arreglo
    int Num[N];

    if (Aleatorio)
    {
        srand(time(NULL));

        for (int i = 0; i < N; i++)
            Num[i] = rand() % 101;
            cout << "Se han agregado los números aleatoriamente.\n";
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            cout << "Ingrese un valor para el número " << i + 1 << ": ";
            cin >> Num[i];
        }
    }

    cout << "\nLista de números con determinación:\n";
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ") " << Num[i] << " ";

        if (Num[i] % 2 == 0)
        {
            cout << "es par.";
        }
        else
        {
            cout << "es impar.";
        }
        cout << "\n";
    }
    
    return 0;
}