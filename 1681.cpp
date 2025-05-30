#include <iostream>
// #include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int P = 1;
    int i = 1;
    while (i <= b)
    {
        P *= a;
        i++;
    }
    cout << P;
    return 0;
}
