#include <iostream>

using namespace std;

int main()
{
    int arr[1000][2];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        arr[i][1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][0] > arr[j][0])
            {
                swap(arr[i][1], arr[j][1]);
                swap(arr[i][0], arr[j][0]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][1] << " ";
    }
    return 0;
}