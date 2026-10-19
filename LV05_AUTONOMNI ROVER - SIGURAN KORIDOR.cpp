
#include <iostream>
using namespace std;

int najboljiKoridor(int teren[][4], int brojRedaka, int D) {
    int najboljiRedak = -1;
    int najboljaRazlika = 0;

    for (int i = 0; i < brojRedaka; i++) {
        int najmanji = teren[i][0];
        int najveci = teren[i][0];

        
        for (int j = 1; j < 4; j++) {
            if (teren[i][j] < najmanji) {
                najmanji = teren[i][j];
            }

            if (teren[i][j] > najveci) {
                najveci = teren[i][j];
            }
        }

      
        int razlika = najveci - najmanji;

     
        if (razlika <= D &&
            (najboljiRedak == -1 || razlika < najboljaRazlika)) {
            najboljaRazlika = razlika;
            najboljiRedak = i;
        }
    }

    return najboljiRedak;
}

int main() {
    int brojRedaka;
    cin >> brojRedaka;

    int teren[100][4];

    for(int i = 0;i<brojRedaka;i++){
        for (int j = 0;j < 4;j++) {
            cin >> teren[i][j];
        }
    }

    int D;
    cin >> D;

    cout << najboljiKoridor(teren, brojRedaka, D);

    return 0;
}