
#include <iostream>
#include <vector>
using namespace std;

int prvaPunionica(const vector<int>& slobodno, int K){
	int indeks = -1;
	for (int i = 0; i < slobodno.size();i++) {
		if (slobodno[i] >= K) {
			indeks = i;
			break;
		}
	}
	return indeks;

}

int main()
{
	int n;
	cin >> n;
	vector <int> slobodno(n);
	for (int i = 0;i < n;i++) {
		cin >> slobodno[i];
	}
	int K;
	cin >> K;
	cout << prvaPunionica(slobodno, K);
}
