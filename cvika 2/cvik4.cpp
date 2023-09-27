#include <iostream>
using namespace std;

int main(void) {
    int a;
    int number = 1;
    cin >> a;
    for(int i = 1; i <= a; i++) {
        for (int n = 1; n <= a; n++) {
            cout << " " << number;
            number++;
        }
        cout << endl;
    }
}