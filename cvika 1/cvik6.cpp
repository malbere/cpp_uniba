#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cin >> a >> b;

    if(a > 0) {
        if(b > 0) {
            cout << "kladna" << endl;
        } else if(b == 0) {
            cout << "nedefinovana" << endl;
        } else {
            cout << "zaporna" << endl;
        }
    } else if(a == 0) {
        if (b == 0) {
            cout << "nedefinovana" << endl;
        } else {
            cout << "nula" << endl;
        }
    } else {
        if (b == 0) {
            cout << "nedefinovana" << endl;
        } else if(b < 0) {
            cout << "kladna" << endl;
        }
        else {
            cout << "zaporna" << endl;
        }
    }
}
