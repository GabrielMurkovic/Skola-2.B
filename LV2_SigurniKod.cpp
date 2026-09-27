
#include <iostream>
using namespace std;

bool PrihvacaLi(int a) {
    int zadnja = a % 10;
	a = a/10;
	int srednja = a % 10;
	a = a/10;
	int prva = a;

	if (prva != srednja && srednja != zadnja && zadnja != prva && srednja > prva && srednja > zadnja) {
		return true;
	}
	else {
		return false;
	}

}
int main()
{
int a;
cin >> a;

if (PrihvacaLi(a)) {
cout << "DA";
}
else {
	cout << "NE";
}
 }
