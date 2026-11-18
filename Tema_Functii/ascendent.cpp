/*Numărul natural an este ascendent al numărului natural n, dacă oricare dintre cifrele lui an este mai mare
sau egală cu cifra unităților lui n.
Exemplu: oricare dintre numerele 7, 9, 98 sau 7998 este ascendent al lui 827, dar numărul 857 nu este
ascendent al lui 827.
Subprogramul ascendent are trei parametri:
• n, prin care primește un număr natural (n∈[0,103));
• x și y, prin care primește câte un număr natural din intervalul [0,103) (x<y).
Subprogramul returnează suma ascendenților lui n din intervalul [x,y], sau valoarea 0, dacă nu există
niciun astfel de ascendent. Scrieți definiția completă a subprogramului C/C++.
Exemplu: dacă n=827, x=9, y=800, subprogramul returnează 7893 (9+77+78+79+87+88+89+
97+98+99+777+778+779+787+788+789+797+798+799=7893). */

#include <iostream>
using namespace std;

int ascendent(int n, int x, int y)
{
    int suma = 0;
    int cifra_unitati = n % 10; // extragerea cifrei unităților lui n

    for (int i = x; i <= y; i++)
    {
        int temp = i;
        bool este_ascendent = true; // presupunem că i este ascendent al lui n până la proba contrarie

        // verificăm fiecare cifră a lui i
        while (temp > 0)
        {
            int cifra = temp % 10;
            if (!(cifra >= cifra_unitati))
            {
                este_ascendent = false;
                break; // dacă găsim o cifră care satisface condiția, nu mai verificăm restul
            }
            temp /= 10;
        }

        if (este_ascendent)
        {
            suma += i;
            cout << i << " "; // adăugăm la sumă dacă i este ascendent al lui n
        }
    }
    cout << endl; // pentru a separa lista de ascendenți de suma finală

    return suma; // returnăm suma ascendenților
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    cout << ascendent(n, x, y);
    return 0;
}