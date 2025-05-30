#include <iostream>
using namespace std;

int main()
{
    int nr, a, b, c, d;
    cin >> nr;
    a = nr / 1000;
    b = nr / 100 % 10;
    c = nr / 10 % 10;
    d = nr % 10;
    cout << d * 1000 + b * 100 + c * 10 + a;

    return 0;
}