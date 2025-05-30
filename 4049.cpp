#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

int Dif_cifre(int n);
int Cifre(int n);
void Ados_0(int n);
int main()
{
    // auto start = std::chrono::high_resolution_clock::now();
    srand(time(NULL));
    int n;
    int x, y, temp_x, temp_y, dif, unic;
    bool ok = false;
    // long long int k;
    cin >> n;
    /// n = 10000;
    // n = 18;
    if (n <= 7)
    {
        x = Cifre(n);
    }
    else
    {
        x = Cifre(7);
        ok = true;
    }
    y = x * 10 - 1;
    // cout << '\n'<< Dif_cifre(n) << '\n';
    // cout << x << ' ' << y << '\n';
    temp_x = x / n + 1;
    temp_y = y / n;
    dif = temp_y - temp_x;
    // cout << dif << '\n';
    unic = rand() % dif + 1;
    // cout << unic << '\n';
    cout << n * (unic + temp_x); /// Dif_cifre(n);
    // cout << ' ';
    int N = n;
    // N -= 7;
    //  int M = 0;
    //  bool ok2 = false;
    if (ok == true)
    {

        do
        {
            N -= 7;
            // M++;
            if (N < 7)
            {
                // x = Cifre(N);
                Ados_0(N);
            }
            else
            {
                // x = Cifre(7);
                unic = rand() % dif + 1;
                cout << n * (unic + temp_x);
            }
            // cout << n * (unic + temp_x); /// Dif_cifre(n);
            // cout << ' ';

        } while (N > 0);
    }

    // cout << Dif_cifre(n) << '\n';

    // auto end = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    // cout << "Time taken: " << duration.count() << " millisecods" << endl;
    //  cout << '\n'    << Dif_cifre(n) << '\n';
    //  cout << '\n';
    //  cout << M;
    return 0;
}
int Dif_cifre(int n)
{
    int i = 1;
    while (n > 9)
    {
        n /= 10;
        i *= 10;
    }
    return i;
}
int Cifre(int n)
{
    int i = 1;
    int num = 1;
    while (i < n)
    {
        num *= 10;
        i++;
    }
    return num; // Dif_cifre(n);
}

void Ados_0(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 0;
    }
}
