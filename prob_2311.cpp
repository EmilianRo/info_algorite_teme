#include <iostream>
using namespace std;
/*Rapunzel s-a născut într-un ţinut îndepărtat într-un regat necunoscut.
Mama vitregă a închis-o pe Rapunzel într-un turn foarte înalt ce avea N metri. Aici Rapunzel urma să-şi petreacă toată copilăria.

Pentru a-i trece timpul mai uşor, Rapunzel cânta din zori şi până în seară,
cântecul ei auzindu-se în tot ţinutul. Atras de vocea de privighetoare a fetei,
Flynn Rider şi-a propus să se caţere pe pereţii exterior ai turnului şi în fiecare zi să procedeze astfel:
 de la răsăritul până la asfinţitul soarelui să parcurgă M1 metri iar apoi, de la asfinţit până la miezul nopţii încă M2 metri.

Scrieţi un program care determină după câte zile ajunge Flynn Rider la Rapunzel.*/

int main()
{

    int N, M1, M2, zile = 0;
    int T;
    cin >> N >> M1 >> M2;
    T = M1 + M2;
    if (N % T == 0)
    {
        zile = N / T;
    }
    else
    {
        zile = N / T + 1;
    }
    cout << zile << '\n';
    return 0;
}
