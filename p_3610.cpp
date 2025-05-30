#include <iostream>
using namespace std;

int main()
{
    int n, cn;
    cin >> n;
    cn = n;
    n /= 100;
    if (cn % 100 == 0)
    {
        cout << cn;
    }
    else
    {
        cout << (n + 1) * 100;
    }
    return 0;
}