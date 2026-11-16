

#include <iostream>
using namespace std;

int pozitivni(int a[], int n) {
    int br = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] > 0) {
            br++;
        }
    }
    return br;
}
int main()
{
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> a[i];
}
    cout << pozitivni(a, n);

}

