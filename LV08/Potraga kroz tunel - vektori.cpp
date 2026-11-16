

#include <iostream>
#include <vector>
using namespace std;

int brojPozitivnih(const vector<int>& a, int i){
    int br = 0;
    for (int b : a){
        if(b > 0){
            br++;
        }
    }
    return br;
}
int main()
{
    int i;
    cin >> i;
    vector <int> a(i);

    for (int i = 0;i < a.size();i++) {
        cin >> a[i];
 }
    cout << brojPozitivnih(a, i);

}

