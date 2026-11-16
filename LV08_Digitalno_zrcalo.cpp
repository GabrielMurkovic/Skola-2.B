
#include <iostream>
using namespace std;

 void obrnuteznamenke(int b) {
	 cout << b % 10;
	
	 if (b < 10) {
		 return;
	 }
	obrnuteznamenke(b/10);
}

int main()
{
	int b;
	cin >> b;

obrnuteznamenke(b);
}
