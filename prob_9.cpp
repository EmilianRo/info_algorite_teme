#include <iostream>
using namespace std;

int main()
{
    int a, b, c, min, max;
    cin >> a >> b >> c;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (c > max)
    {
        max = c;
    }
    else if (c < min)
    {
        min = c;
    }
    cout << max - min;
    return 0;
}