#include <iostream>
using namespace std;

int main(void) {
    int a;
    int sum = 0;
    cin >> a;
    for (int i = 1, n = 1; n <= a; i+=2, n++) {
        if (n == a) {
            cout << i << "=";
        } else {
            cout << i << "+";
        }
        
        sum += i;
    }
    cout << sum << endl;
}