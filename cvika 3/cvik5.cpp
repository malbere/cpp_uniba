#include <iostream>
using namespace std;

void usporiadaj2(int &x, int &y) {
    if (x > y) {
        int a = x;
        x = y;
        y = a;
    }
}

void usporiadaj3(int &x, int &y, int &z) {
    usporiadaj2(x, y);
    usporiadaj2(y, z);
    usporiadaj2(x, y);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        usporiadaj3(x, y, z);
        cout << x << " " << y << " " << z << endl;
    }
    
    return 0;
}