//Prikladnija je jedna funkcija jer se cijeli problem može riješiti unutar
//jedne funkcije koja prima x, a i b, izračunava udaljenosti i određuje koji je cilj bliži.


#include <iostream>
using namespace std;


void NajbliziCilj(int x, int a, int b) {
    int udaljenostA;
    int udaljenostB;

    if (x - a >= 0) {
        udaljenostA = x - a;
    }
    else {
        udaljenostA = a - x;
    }

    if (x - b >= 0) {
        udaljenostB = x - b;
    }
    else{
        udaljenostB = b - x;
    }
    if (udaljenostA < udaljenostB) {
        cout << "A";
    }
    else if (udaljenostB < udaljenostA) {
        cout << "B";
    }
    else {
        cout << "JEDNAKO";
    }
}

int main()
{
    int x, a, b;
    cin >> x;
    cin >> a;
    cin >> b;
   
    NajbliziCilj(x, a, b);
}
