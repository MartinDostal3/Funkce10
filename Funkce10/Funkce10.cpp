// Funkce10.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;
bool dokonaleCislo(int n)
{
    int soucetDelitelu{ 0 };
    bool totoJeDokonaleCislo = false;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            soucetDelitelu += i;
        }
    }
    if (soucetDelitelu == n)
    {
        totoJeDokonaleCislo = true;
    }
    return totoJeDokonaleCislo;
}
int main()
{
    cout << "\nZadejte cele kladne cislo: ";
    int a, b;

    cin >> a;
    cout << "\nZadejte cele kladne cislo: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {

        if (dokonaleCislo(i))cout << "\nDokonale cislo je: " << i;
    }

    getchar();
    getchar();
    return 0;

}