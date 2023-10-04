#include <iostream>
using namespace std;

int main(void) {
    int vstup;
    int pocet6 = 0;

    while (true) {
        cin >> vstup;
        if (vstup == -1) {
            break; 
        } else if (vstup == 6) {
            pocet6++; 
        }
    }

    cout << pocet6 << endl; 

    return 0;
}