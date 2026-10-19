
#include <iostream>
using namespace std;

int brojIznadPraga(int temp[][6], int redak, int P) {
	int br = 0;

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 6;j++) {
			if (temp[i][j] > P) {
				if (i == redak) {
					br++;
				}

			}
		}

	}
	return br;

}
int main()
{
	int redak;
	cin >> redak;
	int temp[4][6];

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 6;j++) {
			cin >> temp[i][j];
		}
	}
	int P;
	cin >> P;
	cout << "S" << redak << ": " << brojIznadPraga(temp, redak, P);

}
