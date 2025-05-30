#include <iostream>
using namespace std;
int Sum(int n);
int main()
{
    int n;
    cin >> n;
    if (n % Sum(n) == 0)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}

int Sum(int n)
{
    int s = 0;
    for (int i = n; i > 0; i /= 10)
    {
        s += i % 10;
    }
    return s;
}