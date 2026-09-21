
#include <iostream>
using namespace std;

bool prolazi(int prvi, int drugi, int treci) {
	if ((prvi + drugi + treci) >= 180 && prvi >= 40 && drugi >= 40 && treci >= 40) {
		return true;
	}
	else {
		return false;
	}
}





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
//Promjenio sam 1 mjesto u provjeravanju uvjeta ako je zbroj bodova veci od 200
