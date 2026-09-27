
#include <iostream>
#include <string>
using namespace std;

bool prihvatljivaPoruka(string poruka) {
bool pronaden = false;
char trazeni = '#';
    for (char znak : poruka) {
        if (znak == trazeni) {
            pronaden = true;
            break;
        }
}
    
    if (!poruka.empty() && poruka.size() <= 40 && pronaden == false) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
string poruka;
getline(cin,poruka);

if (prihvatljivaPoruka(poruka)) {
    cout << "PRIHVACENA";
}
else {
    cout << "ODBIJENA";
}
}
