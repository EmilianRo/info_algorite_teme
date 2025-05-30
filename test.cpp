#include <iostream>
using namespace std;
int Dif_cifre(int n);
main()
{
    int n;
    cin >> n;
    cout << Dif_cifre(n) << '\n';
    return 0;
}

int Dif_cifre(int n)
{
    int i = 1;
    while (n > 9)
    {
        n /= 10;
        i *= 10;
    }
    return i;
}