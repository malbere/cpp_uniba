#include<iostream>
using namespace std;

/* funkcia dostane n a vrati n! */
int faktorial(int n) {
    int a = 1;  
    for (int i = 1; i <= n; i++) {
        a = a * i;
    }
    return a;
}

// Funkciu main nemente
int main() {
    int n;
    cin >> n;
    cout << n << "! = " << faktorial(n) << endl;
}