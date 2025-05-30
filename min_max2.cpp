#include <iostream>
using namespace std;
/*Se dau 2 numere naturale cu exact 3 cifre fiecare,
să se afișeze cel mai mare și cel mai mic număr de
două cifre scris cu o cifră din primul număr și cu o cifră din al doilea.
*/
int main()
{
    int a, b, min_a, min_b, max_a, max_b;
    cin >> a >> b;
    // int a1, a2, b1, b2;
    min_a = a % 10;
    min_b = b % 10;
    max_a = a / 10 % 10;
    max_b = b / 10 % 10;
    // cout << min_a << " " << min_b << " " << max_a << " " << max_a << '\n';
    a = a / 100;
    b = b / 100;

    if (min_a > max_a)
    {
        min_a = max_a + min_a;
        max_a = min_a - max_a;
        min_a = min_a - max_a;
    }
    if (min_b > max_b)
    {
        min_b = max_b + min_b;
        max_b = min_b - max_b;
        min_b = min_b - max_b;
    }

    // cout << min_a << " " << min_b << " " << max_a << " " << max_a << '\n';

    if (a < min_a)
    {
        min_a = a;
    }
    else if (a > max_a)
    {
        max_a = a;
    }

    // cout << min_a << " " << min_b << " " << max_a << " " << max_a << '\n';

    if (b < min_b)
    {
        min_b = b;
    }
    else if (b > max_b)
    {
        max_b = b;
    }

    //      cout << min_a << " " << min_b << " " << max_a << " " << max_a << '\n';

    if (max_a > max_b)
    {
        cout << max_a * 10 + max_b << '\n';
    }
    else
    {
        cout << max_b * 10 + max_a << '\n';
    }

    if (min_a < min_b)
    {
        cout << min_a * 10 + min_b << '\n';
    }
    else
    {
        cout << min_b * 10 + min_a << '\n';
    }
    return 0;
}