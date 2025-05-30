#include <iostream>
using namespace std;

int main()
{
    int min1, min2, s;
    int num[4];

    cin >> num[0];
    cin >> num[1];
    if (num[0] < num[1])
    {
        min1 = num[0];
        min2 = num[1];
    }
    else
    {
        min1 = num[1];
        min2 = num[0];
    }

    for (int i = 2; i <= sizeof(num) / sizeof(int); i++)
    {
        cin >> num[i];
        if (num[i] < min1)
        {
            min2 = min1;
            min1 = num[i];
        }
        else if (num[i] < min2)
        {
            min2 = num[i];
        }
        // cout << min1 << " " << min2 << '\n';
    }
    s = num[0] + num[1] + num[2] + num[3] + num[4] - min1 - min2;
    cout << s;
}