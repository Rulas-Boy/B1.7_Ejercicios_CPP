#include <iostream>
using namespace std;

int main() {
    int Num;

    cout << "Ingrese cualquier número para comprobar si es múltiplo de 6.\n";
    cout << "Ingrese el número: ";
    cin >> Num;
    
    if (Num % 6 == 0)
    {
        cout << Num << " es múltiplo de 6.";
    }
    else
    {
        cout << Num << " NO es múltiplo de 6.";
    }
    
    return 0;
}
