#include <iostream>
using namespace std;
int cmmdc(int a, int b);

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int numarator = a * d + b * c;
    int numitor = b * d;
    int reducere_max = cmmdc(numarator, numitor);
    numarator /= reducere_max;
    numitor /= reducere_max;
    cout << numarator << "\n _\n"
         << numitor;
    return 0;
}

int cmmdc(int a, int b)
{
    if (a > b)
        return cmmdc(a - b, b);
    else if (a < b)
        return cmmdc(a, b - a);
    else
        return a;
}
