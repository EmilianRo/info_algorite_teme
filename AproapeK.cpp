#include <iostream>
using namespace std;
// Se dau două numere naturale nenule n și k. Să se determine multiplul lui k cel mai apropiat de n.
int main()
{
    int n, k;
    // cin >> n >> k;
    while (true)
    {
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n << '\n';
        }
        else if (k % 2 == 0)
        {
            if (n % k < k / 2)
            {
                cout << n % k << "<" << k / 2 + 1 << '\n';
                n = n / k;
                cout << n * k << '\n';
            }
            else
            {
                cout << n % k << "<" << k / 2 + 1 << '\n';
                n = n / k;
                n += 1;
                cout << n * k << '\n';
            }
        }
        else if (n % k < k / 2 + 1)
        {
            cout << n % k << "<" << k / 2 + 1 << '\n';
            n = n / k;
            cout << n * k << '\n';
        }
        else
        {
            cout << n % k << "<" << k / 2 + 1 << '\n';
            n = n / k;
            n += 1;
            cout << n * k << '\n';
        }
    }
}