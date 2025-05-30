#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    i = n * 2 - 1;
    while (i > 0)
    {
        cout << i << ' ';
        i -= 2;
    }
    return 0;
}