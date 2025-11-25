#include <iostream>
using namespace std;

int main()
{

    int n, a, b, c, l;
    int L_max, l_max;
    cin >> n >> a;
    l = 1;
    L_max = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        if (a < b)
        {
            l++;
        }
        else
        {
            cout << "lungime " << l << '\n';
            cout << i - l << "..." << i - 1 << '\n';
            if (L_max < l)
            {
                L_max = l;
                l_max = i - l;
            }
            l = 1;
        }
        a = b;
    }
    cout << "lungime " << l << '\n';
    cout << n - l + 1 << "..." << n << '\n';

    cout << "Lungime maxima " << l_max << " ... " << L_max << '\n';
    return 0;
}