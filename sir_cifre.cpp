#include <iostream>
using namespace std;

int main()
{
    int p, k, i = 1;
    int p1, k1;
    cin >> p >> k;
    p1 = p;
    k1 = k;
    k = k - 1;
    if (k % 2 == 1)
    {
        k--;
        k = k / 2;
        p = p + k * 10 + k * 20 + 10;
    }
    else
    {
        k = k / 2;
        p = p + k * 20 + k * 10;
    }
    while (i < k1)
    {
        if (i % 2 == 0)
        {
            p1 += 20;
        }
        else
        {
            p1 += 10;
        }
        i++;
        // cout << p << '\n';
    }
    cout << p << " " << p1;
    // #1464
}