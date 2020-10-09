#include <iostream>
using namespace std;

int main() {
    int Num;

    cout << "Ingrese cualquier número para determinar si es par.\n";
    cout << "Ingrese el número: ";
    cin >> Num;
    
    if (Num % 2 == 0)
    {
        cout << Num << " es par.";
    }
    else
    {
        cout << Num << " es impar.";
    }
    
    return 0;
}
