#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = n / 2;
    int i = 3;
    bool prim = true;
    if (n % 2 == 0)
    {
        cout << 2;
        prim = false;
    }
    while (prim && i <= j)
    {
        if (n % i == 0)
        {
            cout << i;
            prim = false;
        }
        i += 2;
    }
    if (prim)
    {
        cout << "Prim";
    }
}