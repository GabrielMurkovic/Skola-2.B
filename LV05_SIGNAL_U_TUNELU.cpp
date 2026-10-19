
#include <iostream>
using namespace std;

int prviSkok(int signal[], int n, int D) {
	int skok = -1;
	for (int i = 0;i < n-1;i++) {
		if (abs(signal[i] - signal[i+1]) > D) {
			skok = i + 1;
			break;
		}
	}
	return skok;
}

int main()
{
	int n;
	cin >> n;
	int signal[100];

	for (int i = 0;i < n;i++) {
		cin >> signal[i];
}
	int D;
	cin >> D;
	cout << prviSkok(signal, n, D);
}

