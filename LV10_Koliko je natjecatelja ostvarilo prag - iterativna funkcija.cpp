#include <iostream>
#include <vector>
using namespace std;

// Iterativna funkcija
int brojProlaznihIter(const vector<int>& v, int p) {
    int broj = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= p) {
            broj++;
        }
    }

    return broj;
}

int main() {
    int n, p;

    cin >> n >> p;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "PROLAZ " << brojProlaznihIter(v, p) << endl;

    return 0;
}