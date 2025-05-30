#include <iostream>
using namespace std;

int main()
{

    int n;
    int p = 2;
    int ex = 2;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        p *= ex;
    }
    cout << p;
    return 0;
}