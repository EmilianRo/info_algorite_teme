#include <iostream>
using namespace std;

int main()
{

    int *pNum;
    int size;
    cin >> size;
    pNum = new int[size];
    for (int i = 0; i < size; i++)
    {

        cin >> pNum[i];
        if ((i + 1) % 2 == 0)
        {
            cout << pNum[i] << ' ';
        }
    }
    cout << '\n';
    for (int i = size - 1; i >= 0; i--)
    {
        if ((i + 1) % 2 == 1)
        {
            cout << pNum[i] << ' ';
        }
    }
    delete[] pNum;
    return 0;
}