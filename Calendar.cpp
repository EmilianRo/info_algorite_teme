#include <iostream>
using namespace std;
/*Se citesc 3 numere naturale z l a.
Să se decidă dacă reprezintă o dată calendaristică corectă,
în format zi luna an.*/
int main()
{
    int z, l, a;
    bool ok2;
    cin >> z >> l >> a;
    if (z > 0 && z <= 31)
    {
        ok2 = true;
    }
    if (l > 0 && l <= 12 && ok2)
    {
        cout << "1\n";
        // ok1 = true;
        if (l <= 7)
        {
            cout << "2\n";
            if (l % 2 == 0)
            {
                cout << "3\n";
                if (l == 2 && a % 4 == 0) // Februarie an bisect
                {
                    cout << "4\n";
                    if (z > 29)
                    {
                        cout << "5\n";
                        ok2 = false;
                    }
                }
                else if (l == 2) // feb an bisect
                {
                    cout << "6\n";
                    if (z > 28)
                    {
                        cout << "7\n";
                        ok2 = false;
                    }
                }
                else if (z > 30 /* && l != 2*/) // restul zilelor cu 30 zile pare
                {
                    cout << "8\n";
                    ok2 = false;
                }
            }
        }
        else
        {
            if (l % 2 == 1) // restul zilelor cu 30 zile impare
            {
                cout << "9\n";
                if (z > 30)
                {
                    cout << "10\n";
                    ok2 = false;
                }
            }
        }
    }
    if (ok2 == true)
    {
        cout << "11\n";
        cout << "da";
    }
    else
    {
        cout << "12\n";
        cout << "nu";
    }
}