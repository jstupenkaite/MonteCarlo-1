#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Monte Carlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    // Kintamuju apsirasymas
    double f, x; // Funkcijos reiksmes ir argumentas x
    int n; // Uzedavinio dimensija
    double xSprendinys; // Argumento reiksme
    int fSprendinys; // Uzdavinio sprendinys

    // Vektoriu kurimas, kuriu elementai yra atitiktiniai realus skaiciai

    double virsutinis_rezis, apatinis_rezis; // apsirasome intervalo rezius

    cout << "Iveskite inervalo rerzius: ";
    cin >> apatinis_rezis >> virsutinis_rezis;
    cout << "Iveskite vektoriaus ilgi: ";
    cin >> n;

    double vektorius[n];
    cout << "x = [ "; // papildziau
    for(int i=0; i<n; i++)
    {
        vektorius[i] = rand() * (virsutinis_rezis - apatinis_rezis) / RAND_MAX + apatinis_rezis;

        cout << vektorius[i] << " "; // pakeiciau
    }
    cout << "]"; // papildziau

    return 0;
}
