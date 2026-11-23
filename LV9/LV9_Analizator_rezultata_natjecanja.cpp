#include <iostream>
#include <vector>
using namespace std;

// Iterativna funkcija za brojanje rezultata >= p
int brojProlaznihIter(const vector<int>& v, int p) {
    int broj = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= p) {
            broj++;
        }
    }

    return broj;
}

// Rekurzivna funkcija za brojanje rezultata >= p
int brojProlaznihRek(const vector<int>& v, int p, int i) {

    // Bazni slucaj - dosli smo do kraja vektora
    if (i == v.size()) {
        return 0;
    }

    // Provjeravamo zadovoljava li trenutni rezultat prag
    int dodatak = 0;

    if (v[i] >= p) {
        dodatak = 1;
    }

    // Pozivamo funkciju za sljedeci element
    return dodatak + brojProlaznihRek(v, p, i + 1);
}

int main() {
    int n, p;

    // Unos broja natjecatelja i praga
    cin >> n >> p;

    vector<int> v(n);

    // Unos rezultata natjecatelja
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Poziv iterativne funkcije
    int iter = brojProlaznihIter(v, p);

    // Poziv rekurzivne funkcije
    int rek = brojProlaznihRek(v, p, 0);

    // Ispis rezultata
    cout << "Iterativno: " << iter << endl;
    cout << "Rekurzivno: " << rek << endl;

    // Provjera jesu li rezultati jednaki
    if (iter == rek) {
        cout << "Rezultati su jednaki." << endl;
    }
    else {
        cout << "Rezultati nisu jednaki." << endl;
    }

    return 0;
}

