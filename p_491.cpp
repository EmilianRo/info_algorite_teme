#include <iostream>
using namespace std;
int main()
{
    int *pnum = nullptr;
    int size, temp_s = 0, s = 0;
    bool P1 = true, P2 = false;
    cin >> size;
    pnum = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> pnum[i];
        if (pnum[i] % 2 == 0 && P1)
        {
            P1 = false;
            P2 = true;
        }
        if (P2)
        {
            s += pnum[i];
            if (pnum[i] % 2 == 1)
            {
                temp_s += pnum[i];
            }
            else
            {
                temp_s = 0;
            }
        }
    }
    delete[] pnum;
    cout << s - temp_s;
    return 0;
}
