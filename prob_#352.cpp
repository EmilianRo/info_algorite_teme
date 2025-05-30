#include <iostream>
using namespace std;
int Sum(int size);

int main()
{

    int n;
    cin >> n;
    int temp;
    for (int i = 2; i <= n; i++)
    {
        temp = n - (i * (i - 1) / 2);
        if (temp % i == 0 && temp > 0)
        {
            temp /= i;
            for (int j = 0; j < i; j++)
            {
                if (temp == 0)
                {
                    continue;
                }
                cout << temp << " ";
                temp++;
            }
            cout << '\n';
            // break;
        }
    }
}
int Sum(int size) // size = sir de nr al inputului
{
    int sum = 0;
    for (int i = 1; i <= size - 1; i++)
    {
        sum += i;
    }
    return sum;
}

/*int First_Num(int *n, int s, int size, int i); // s = numar citit; n = vectorul cu divizorii numarului citit; size = dimensiunea vectorului
int Sum(int size);
int Counter(int *n, int i);
void Print(int a, int size);

int main()
{

    int size = 0, temp = 0;
    int *pnr = nullptr;
    int n, cn;
    int print;
    int a;
    cin >> n;
    cn = 2 * n;
    for (int i = 3; i <= cn; i += 2)
    {
        if (cn % i == 0)
        {
            size++;
        }
    }
    pnr = new int[size];
    temp = 0;
    for (int i = 3; i <= cn; i += 2)
    {
        if (cn % i == 0)
        {
            pnr[temp] = i;
            temp++;
            if (temp == size)
            {
                break;
            }
        }
    }

    /*for (int i = 0; i < size; i++)
    {
        cout << pnr[i] << " ";
    }
    // pnr = new int[size];
    for (int i = 0; i < size; i++)
    {
        a = First_Num(pnr, n, Counter(pnr, i), i);
        for (int j = 0; j < Counter(pnr, i); j++)
        {
            cout << a << " ";
        }
        print = pnr[i];
        Print(a, print);
        cout << '\n';
    }
    // cout << '\n'<< Sum(3);
    delete[] pnr;
    return 0;
}

int First_Num(int *n, int s, int size, int i)
{
    int first;
    if (s - Sum(size) == 0)
    {
        return (s - Sum(size - 1)) / n[i];
    }
    else
    {
        return (s - Sum(size)) / n[i];
    }
    // return 0;
}

int Sum(int size) // size = sir de nr al inputului
{
    int sum = 0;
    for (int i = 1; i <= size - 1; i++)
    {
        sum += i;
    }
    return sum;
    // return 0;
}

int Counter(int *n, int i)
{

    return n[i] - 1;
    // return 0;
}

void Print(int a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a << " ";
    }
}*/