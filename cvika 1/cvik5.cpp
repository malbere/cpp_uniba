#include <iostream>
using namespace std;

int main() {
    int m1, s1, m2, s2;
    int sum1, sum2;

    cin >> m1 >> s1 >> m2 >> s2;

    sum1 = m1 * 60 + s1;
    sum2 = m2 * 60 + s2;

    if (sum1 < sum2) {
        cout << "prvy" << endl;
    } else if(sum1 > sum2) {
        cout << "druhy" << endl;
    } else {
        cout << "remiza" << endl;
    }
}
