#include <iostream>

using namespace std;

bool Divide10(int a);
int main()
{
    int v[1000];
    // int arr[10];
    bool found = false;
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (Divide10(v[i]))
        {
            found = true;

            swap(v[k], v[i]);
            for (int j = 0; j < k; j++)
            {
                if (v[j] < v[k])
                {
                    swap(v[j], v[k]);
                }
            }

            k++;
        }
        // cout << "k: " << k << '\n';
        // for (int l = 0; l <= i; l++)
        // {
        //     cout << v[l] << " ";
        // }
    }

    // cout << "\n";
    if (!found)
        cout << "NU EXISTA\n";
    else
        for (int i = 0; i < k; i++)
        {
            cout << v[i] << " ";
        }
    return 0;
}

bool Divide10(int a)
{
    return a % 10 == 0;
}