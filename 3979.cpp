#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    const int interval[2] = {3, 7};
    int s = 0;
    while (x > 0)
    {
        int c = x % 10;
        if (c >= interval[0] && c <= interval[1])
            s += c;
        x /= 10;
    }
    cout << s;
    return 0;
}