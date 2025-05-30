#include <iostream>
using namespace std;

int main()
{
    int pNum[100];
    // pNum = nullptr;
    int temp = 0, size, s = 0;
    cin >> size;
    // pNum = new int[size];
    /* for (int i = 0; i < size; i++)
    {
        cin >> pNum[i];
    }
    temp = pNum[0];
    s = temp;*/

    for (int i = 0; i < size; i++)
    {
        cin >> pNum[i];
        if (pNum[i] > temp)
        {

            temp = pNum[i];
            s += temp;
        }
    }
    // delete[] pNum;
    cout << s;
    return 0;
}
