#include <iostream>
using namespace std;

int main()
{

    int a, b, c, h, min, n;
    cin >> a >> b >> c >> h;
    h *= 100;
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    cout << h / min;
    return 0;
}