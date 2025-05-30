#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, s;
    int min1, min2;
    cin >> a >> b >> c >> d >> e;
    if (a < b)
    {
        min1 = a;
        min2 = b;
    }
    else
    {
        min1 = b;
        min2 = a;
    }
    if (c < min1)
    {
        min2 = min1;
        min1 = c;
    }
    else if (c < min2)
    {
        min2 = c;
    }

    if (d < min1)
    {
        min2 = min1;
        min1 = d;
    }
    else if (d < min2)
    {
        min2 = d;
    }
    if (e < min1)
    {
        min2 = min1;
        min1 = e;
    }
    else if (e < min2)
    {
        min2 = e;
    }
    s = a + b + c + d + e - min1 - min2;
    cout << s << '\n';

    return 0;
}