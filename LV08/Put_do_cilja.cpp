
#include <iostream>
using namespace std;

long long nacini(int n) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}

	return nacini(n - 1) + nacini(n - 2);
}
int main()
{
	int n;
	cin >> n;

	cout << nacini(n);
}

