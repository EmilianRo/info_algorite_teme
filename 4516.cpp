// #include <iostream>
// using namespace std;

// int main()
// {
//     long long x;
//     // int c[3];
//     cin >> x;
//     int max = x % 1000;
//     x /= 1000;
//     cout << max << '\n';
//     cout << x << '\n';
//     // for(int i = 0; i < 3; i++) {
//     //     c[i] = x % 10;
//     //     x /= 10;
//     // }

//     while (x > 0)
//     {
//         int temp = max / 10 + (x % 10) * 100;
//         if (temp > max)
//             max = temp;
//         cout << max << ' ' << x << ' ' << temp << '\n';
//         x /= 10;
//     }
//     cout << max;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    int max = x % 1000;
    x /= 10;

    while (x > 0)
    {
        int temp = x % 1000;
        if (temp > max)
            max = temp;
        x /= 10;
    }

    cout << max;
    return 0;
}