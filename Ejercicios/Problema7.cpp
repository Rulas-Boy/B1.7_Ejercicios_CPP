#include <iostream>
using namespace std;

int main() {
    int Num;

    cout << "Ingrese cualquier número para comprobar si es divisible entre 14.\n";
    cout << "Ingrese el número: ";
    cin >> Num;
    
    if (Num % 14 == 0)
    {
        cout << Num << " es divisible entre 14.";
    }
    else
    {
        cout << Num << " NO es divisible entre 14.";
    }
    
    return 0;
}
