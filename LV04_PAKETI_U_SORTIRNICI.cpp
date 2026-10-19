
#include <iostream>
using namespace std;

int brojPaketa(int mase[], int n, int L, int D) {
    int br = 0;
    for (int i = 0;i < n;i++) {
        if (mase[i] >= L && mase[i] <= D) {
            br++;
        }
    }
    return br;
}
int main()
{
    int n;
    cin >> n;
    int mase[1000];
    for (int i = 0;i < n;i++) {
        cin >> mase[i];
    }
    int L, D;
    cin >> L >> D;
    cout << brojPaketa(mase,n,L,D);
}

