#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n % 2 == 0)
    {
        n--;
    }
    i = n;
    while (i > 0)
    {
        cout << i << ' ';
        i -= 2;
    }
    return 0;
}