
#include <iostream>
using namespace std;

bool valjanoMjerenje(double temperatura, char jedinica, bool potvrdeno) {
	if (jedinica != 'C' && jedinica != 'F') {
		return 0;
}

	if (potvrdeno && temperatura >= -40 && temperatura <= 185 && jedinica == 'F') {
		return true;
	}
	else if(potvrdeno && temperatura >= -40 && temperatura <= 85 && jedinica == 'C'){
		return true;
	}
	else {
		return false;
	}

}
int main()
{
	double temperatura;
	char jedinica;
	bool potvrdeno;
	cin >> boolalpha >> temperatura;
	cin >>  jedinica;
	cin >> potvrdeno;

	if (valjanoMjerenje(temperatura, jedinica, potvrdeno)){
		cout << "KORISTI";
}
	else {
		cout << "ODBACI";
	}
}