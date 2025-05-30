#include <iostream>
using namespace std;

/*int main()

{
    int n, N, p;

    cin >> n;
    p = 1;
    while (n != 0)
    {
        if (n < 10)
        {
            p *= 10;
        }
        N = n % 10 * p + N;
        p *= 10;
        n /= 10;
    }
    cout << N;
}

*/
/*int main()
{
    int n, N, p;

    cin >> n;
    p = 1;
    while (n != 0)
    {
        if (n % 10 != 0)
        {
            N = n % 10 * p + N;
            p *= 10;
        }
        n /= 10;
    }
    cout << N;
}*/
int main()
{
    int n, N, p;

    cin >> n;
    p = 1;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            n++;
        }
        N = n % 10 * p + N;
        p *= 10;
        n /= 10;
    }
    cout << N;
}
