#include <iostream>

using namespace std;

int main()
{
    int n;
    int StartSum;
    int save = -999;
    cin >> n;
    if (n < 9)
    {
        // return 0;

        for (int i = 100; i <= 999; ++i)
        {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            if (a + b + c == n)
            {
                cout << i << " ";
                // StartSum = i;
                // break;
                i = i + 8;
                save = i;
            }
            if (i - save >= 9 && save != -999)
            {
                i = (i / 100 + 1) * 100 - 1;
                save = -999;
            }
            if (a > n)
            {
                break;
            }
        }
    }
    else
        for (int i = 100; i <= 999; i++)
        {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            if (a + b + c == n)
            {
                cout << i << " ";
                // StartSum = i;
                // break;
                // i = i + 8;
                // save = i;
            }
        }
}
//     for (int i = StartSum; i <= 999; i = i - 1 + 10)
//     {
//         // int a = i / 100;
//         // int b = (i / 10) % 10;
//         // int c = i % 10;
//         // if (a + b + c == n){
//         //     cout << i << " ";
//         // }
//     //     if (i % 10 == 0)
//     //     {
//     //         i = i + 90;
//     //     }
//     //     if (i % 10 >= n)
//     //     {
//     //         i = i - (i % 10) + n - 1;
//     //     }
//     //     if (i / 10 % 10 >= n)
//     //     {
//     //         i = i - (i / 10 % 10) * 10 + (n - 1) * 10;
//     //     }
//     //     if (i / 100 > n)
//     //     {
//     //         break;
//     //     }
//     //     if ((i / 100) + (i / 10 % 10) + (i % 10) == n)
//     //         cout << i << " ";
//     // }
// }