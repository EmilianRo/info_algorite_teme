#include <iostream>
#include <chrono>
using namespace std;
bool Prim(int *n, int t);
int main()
{
    auto start = chrono::high_resolution_clock::now();
    // cout << "Hello world!" << endl;
    int *pNum;
    pNum = nullptr;
    int s;
    cin >> s;
    int low = 0;
    pNum = new int[s];
    for (int i = 0; i < s; i++)
    {
        cin >> pNum[i];
    }
    for (int i = s - 1; i >= 0; i--)
    {
        // cout << Prim(pNum, i) << '\n';
        if (Prim(pNum, i))
        {
            low = pNum[i];
            // cout << low << '\n';
            break;
        }
    }
    for (int i = s - 1; i >= 0; i--)
    {
        if (low == pNum[i])
        {
            pNum[i] = 0;
            break;
        }
        // cout << low << ' ';
    }
    // cout << '\n';
    for (int i = 0; i < s; i++)
    {
        cout << pNum[i] << ' ';
    }
    delete[] pNum;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
    return 0;
}
bool Prim(int *n, int t)
{
    int k = true;
    int temp;
    // int t = 0;
    temp = n[t];
    for (int i = 2; i <= temp / 2; i++)
    {
        if (temp % i == 0)
        {
            // cout<<
            k = false;
            return k;
            break;
        }
    }
    return k;
}