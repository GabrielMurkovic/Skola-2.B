// Naziv Funckije:Prolazi
// Ulazni parametri: broj bodova u 1., 2. i 3. zadatku
// Povratna vrijednost: true ili false
// Što radi main(), a što funkcija?  Main učitava bodove i ispisuje dali prolazi ili ne,a funkcija provjerava zadoljava li natjecatelj sve uvjete

bool prolazi(int prvi, int drugi, int treci) {
	if (prvi + drugi + treci >= 200 && prvi >= 40 && drugi >= 40 && treci >= 40) {
		return true;
	}
	else {
		return false;
	}
}


#include <iostream>
using namespace std;

int main() {
	int prvi, drugi, treci;
	cin >> prvi >> drugi >> treci;

	if (prolazi(prvi, drugi, treci)) {
		cout << "PROLAZI";
	}
	else {
		cout << "NE PROLAZI";
	}
}
// Ulaz: 80 90 30
// Očekivani izlaz : NE PROLAZI
// Što ovim testom provjeravam : Provjeravam da natjecatelj ne prolazi ako iz jednog zadatka ima manje od 40 bodova, iako ima dovoljno ukupnih bodova

// Ulaz: 50 60 70
// Očekivani izlaz : NE PROLAZI
// Što ovim testom provjeravam : Provjeravam da natjecatelj ne prolazi ako iz svih zadataka ima dovoljno bodova, ali nema dovoljno ukupnih bodova
