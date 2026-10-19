
// (5,5) - PROLAZI 
// (2,7) - PROLAZI
// (9,5) - NE PROLAZI jer je x pre velik
// (2,2) - NE PROLAZI jer je y pre mali

// Što funkcija mora primiti? mora primiti x, y,xmin,xmax.ymin,ymax
// Što mora vratiti ? 1 2 ili 3 nalazi li se igrač unutar sigurne zone ili na njezinu rubu ili izvan zone 
// Kako biste je nazvali ? GdjeSeNalazi

#include <iostream>
using namespace std;

int GdjeSeNalazi(int x,int y,int xmin, int xmax,int ymin,int ymax) {
	if (x < xmax && x > xmin && y < ymax && y > ymin) {
		return 1;
	}
	else if (x >= xmin && x <= xmax && y >= ymin && y <= ymax && (x == xmin || x == xmax || y == ymin || y == ymax)) {
		return 2;
	}
	else {
		return 3;
	}
}
int main() {
	int x, y, xmin, xmax, ymin, ymax;
	cin >> x;
	cin >> y;
	cin >> xmin;
	cin >> xmax;
	cin >> ymin;
	cin >> ymax;

	if (GdjeSeNalazi(x, y, xmin, xmax, ymin, ymax) == 1) {
		cout << "nalazi se unutar sigurne zone";
	}
	else if (GdjeSeNalazi(x, y, xmin, xmax, ymin, ymax) == 2){
		cout << "nalazi se na rubu sigurne zone";
}
	else {
		cout << "nalazi se izvan zone";
	}
}
// AI test : (2, 5) uz zonu xmin = 2, xmax = 8, ymin = 3, ymax = 7
//Zašto je zanimljiv : Provjerava prepoznaje li program točku na lijevom rubu koja nije u kutu
// Moj očekivani rezultat : nalazi se na rubu sigurne zone
// Je li otkrio pogrešku? Ako jest, koju? Da. Otkrio je da program prepoznaje samo četiri kuta kao rub, a ne cijeli rub pravokutnika.

