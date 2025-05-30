#include <iostream>
#include <chrono>
// #include <thread>
using namespace std;

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int *n;
    int size;
    int **save;
    cin >> size;
    bool ok = false;
    bool ok2 = false;
    n = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> n[i];
    }
    if (size == 1)
    {
        cout << "DA" << ' ' << n[0];
        delete[] n;
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
        cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
        return 0;
    }
    save = new int *[size / 2];
    for (int i = 0; i < size / 2; i++)
    {
        save[i] = new int[2];
        save[i][1] = 0;
        save[i][0] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        // cout << n[i] << ' ';
        for (int j = 0; j < size / 2; j++)
        {
            // cout << save[j][0] << ' ' << save[j][1] << '\n';
            if (n[i] != save[j][0] && save[j][1] == 0)
            {
                save[j][0] = n[i];
                // cout << save[j][0] << ' ';
                save[j][1]++;
                break;
            }
            if (n[i] == save[j][0])
            {
                save[j][1]++;
                if (save[j][1] > size / 2)
                {
                    cout << "DA" << ' ' << save[j][0];
                    for (int i = 0; i < size / 2; i++)
                    {
                        delete[] save[i];
                    }
                    delete[] save;
                    delete[] n;
                    auto end = chrono::high_resolution_clock::now();
                    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
                    cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
                    return 0;
                }
                break;
            }

            if (!(save[size / 2 - 1][0] == -1))
            {
                cout << "NU";
                ok = true;
                break;
            }
        }
        if (ok)
        {
            break;
        }
    }

    if (!ok)
    {
        cout << "NU";
    }
    for (int i = 0; i < size / 2; i++)
    {
        delete[] save[i];
    }
    delete[] save;
    delete[] n;
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "\nExecution time: " << duration.count() << " milliseconds" << endl;
    // cout << '\n';
    //  cout << save[size / 2 - 1][0] << ' ' << save[size / 2 - 1][1] << '\n';
    /*for (int i = 0; i < size / 2; i++)
    {
        cout << "save[" << i << "][0] = save[" << i << "][1] = ";
        cout << save[i][0] << ' ' << save[i][1] << '\n';
    }*/
    /*if (!ok)
    {
        for (int i = 0; i < size / 2; i++)
        {
            if (save[i][1] > size / 2)
            {
                cout << "DA" << ' ' << save[i][0] << ' ';
                ok2 = true;
                break;
            }
        }
    }
    if (!ok2 && !ok)
    {
        cout << "NU";
    }
    for (int i = 0; i < size / 2; i++)
    {
        delete[] save[i];
    }*/
    return 0;
}