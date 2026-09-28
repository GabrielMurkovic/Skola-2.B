
#include <iostream>
#include <string>
using namespace std;

bool kandidatDNA(string dna) {
    int gc = 0;
    bool svaki = false;
    for (char znak : dna) {
        if (znak != 'A' && znak != 'C' && znak != 'T' && znak != 'G') {
            return false;
        }
        else {
            svaki = true;
        }
        for (char znak : dna)
            if (znak == 'G' || znak == 'C') {
                gc++;
            }
    }
    if (dna.size() >= 6 && dna.size() <= 30 && gc * 2 >= dna.size() && svaki) {
        return true;
    }
    else {
        return false;
    }
    
}
int main()
{
    string dna;
    cin >> dna;

    if (kandidatDNA(dna)) {
        cout << "DA";
    }
    else {
        cout << "NE";
    }
}

