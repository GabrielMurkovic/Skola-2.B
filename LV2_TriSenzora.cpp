/* Naziv i potpis funkcije : int Srednji
Ulazni parametri(broj, tip, značenje) : (int prvi broj,int drugi broj,int treci broj)
Jedna povratna vrijednost(tip i značenje) : int - vraca cijeli broj
Koje vrijednosti treba čuvati main(), a koje samo funkcija ? u mainu cu deklarirati brojeve, upisati ih i ispisati srednji broj,
a u funkciji cu naci srednji broj  */

#include <iostream>
#include <climits>
using namespace std;

int Srednji(int a, int b, int c) {
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = a+b+c;

    if(a > max) max = a;
    if (b > max) max = b;
    if (c > max) max =c;
    if(a < min) min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    int srednji = sum - min - max;
    return srednji;

    }
int main()
{
int a,b,c;
cin >> a;
cin >> b;
cin >> c;
cout << Srednji(a,b,c);
}

//Vlastiti test: ulaz -10,5,10 očekivani rezultat 5 zašto je važan: provjerava negativne brojeve
//Dorada: Zato što je srednja vrijednost određena skupom od tri broja, a ne redoslijedom kojim su uneseni