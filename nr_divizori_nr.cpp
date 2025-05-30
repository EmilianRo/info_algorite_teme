#include <iostream>
using namespace std;
int Divizori(int n, int d, int p, int D);
int main()
{
    int n, p, d = 2, D = 1;
    cin >> n;
    cout << Divizori(n, 2, 0, 1);
    // while (n != 1)
    // {
    //     p = 0;
    //     while (n % d == 0)
    //     {
    //         n /= d;
    //         p++;
    //     }
    //     d++;
    //     // cout << d << " " << p << endl;
    //     D = D * (p + 1);
    // }
    // cout << D;
    // return 0;
}

int Divizori(int n, int d, int p, int D)
{

    // D = 1;
    if (n % d == 0)
    {
        cout << d << " " << p << ' ' << n << endl;
        return Divizori(n / d, d, p + 1, D);
    }
    else if (n != 1)
    {
        cout << d << " " << p << ' ' << n << endl;
        return Divizori(n, d + 1, 0, D * (p + 1));
    }
    else
    {
        return D * (p + 1);
    }
    return 0;
}
