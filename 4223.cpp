#include <iostream>
using namespace std;
// int Cifre(int n);
int Sum_Cifre(int n);
int Prima_Cifra(int n);
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (Prima_Cifra(x) == k)
            sum += Sum_Cifre(x);
    }

    if (sum != 0)
        cout << sum;
    else
        cout << -1;
    return 0;
}
// int Cifre(int n)
// {
//     int p = 1;
//     for (int i = n; i > 0; i /= 10)
//         p *= 10;
//     return p / 10;
// }
int Sum_Cifre(int n)
{
    int s = 0;
    for (int i = n; i > 0; i /= 10)
        s += i % 10;
    return s;
}

int Prima_Cifra(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}