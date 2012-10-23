#include <iostream>
#include <cstdlib>
#include <math.h>

// funkcija
double sixhump(double *x)
{
    double f = (4- 2.1 * x[0] * x[0] + (pow(x[0],4))/3) * x[0] * x[0] + x[0] * x[1] + (-4+4*x[1]*x[1])*(pow(x[1],2));
    return f;
}

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

    for(int i=0; i<n; i++)
    {
        vektorius[i] = rand() * (virsutinis_rezis - apatinis_rezis) / RAND_MAX + apatinis_rezis;
        cout << "Skaicius = " << vektorius[i] << endl; // pakeiciau
    }

    cout << "Funkcija = " << sixhump(&vektorius[0]) << endl; // pakeiciau
    cout << "===================================" << endl;


    return 0;
}
