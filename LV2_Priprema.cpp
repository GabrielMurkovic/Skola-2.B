
#include <iostream>
using namespace std;

int najveci(int a, int b, int c) {
    int max = INT_MIN;
    if (a > max) max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
void ParanIliNeparan(int a) {
    if (a % 2 == 0) {
        cout << "P";
    }
    else {
        cout << "N";
    }
}
int main()
{
 int a,b,c,d;
 cin >> a;
 cin >> b;
 cin >> c;
 cin >> d;
 cout << najveci(a,b,c) << endl;
 ParanIliNeparan (d);

}

