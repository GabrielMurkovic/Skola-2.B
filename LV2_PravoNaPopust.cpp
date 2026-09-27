
/*Potpis funkcije: bool OstvarujeLiPopust
Koja su tri ulazna parametra? bodovi,iznos računa i 0 ili 1 jel popust iskoristen ili ne
Zašto je povratni tip bool, a ne tri odvojene povratne vrijednosti? Jer funkcija treba vratiti samo jednu vrijednost
Što treba raditi main(), a što funkcija?  U mainu unosimo vrijednosti, pozivamo funkciju i ako je funkcija truue ispisujemo DA a ako false onda NE*/
#include <iostream>
using namespace std;

bool OstvarujeLiPopust(int bodovi, double racun, int iskoristen) {
	if (iskoristen != 1 && iskoristen != 0) {
		cout << "Unijeli ste krivi podatak!";
		return 0;
}
	if (bodovi >= 12 && racun >= 30 && iskoristen == 0) {
	return true;
	}
	else {
		return false;
	}
}
int main()
{
int bodovi,iskoristen;
double racun;
cin >> bodovi >> racun >> iskoristen;
if (OstvarujeLiPopust(bodovi, racun, iskoristen)) {
	cout << "DA";
}
else {
	cout << "NE";
}

}
//Vlastiti rubni test: ulaz 12 30.01 0 očekivani izlaz DA što provjerava: provjerava slučaj kada je račun samo malo iznad minimalnog praga
//Mala dorada: Treba se mijenjati samo broj u uvjetu jer je sve ostalo isto 