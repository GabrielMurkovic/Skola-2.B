
#include <iostream>
using namespace std;

void ispraviMjerenja(int a[], int n) {
	for (int i = 0;i < n;i++) {
		if (a[i] < 0) {
			a[i] = 0;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	ispraviMjerenja(a, n);

	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}

