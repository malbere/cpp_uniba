#include<iostream>
using namespace std;

int faktorial(int n) {
    int factorial = 1;  
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int komb(int n, int k) {
    return faktorial(n) / (faktorial(k) * faktorial(n - k));
}

// funkciu main nemente
int main() {
    int n;
    cin >> n;
    cout << n << "! = " << faktorial(n) << endl;
    cout << "Kombinacne cisla:";
    for (int k = 0; k <= n; k++) {
        cout << " " << komb(n, k);
    }
    cout << endl;
}