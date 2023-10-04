#include <iostream>
using namespace std;

/** Funkcia vrati pocet cifier v desiatkovom zapise pre cele cislo
 * n>=0. Pozor, pocet cifier pre n=0 by mal byt 1. */
int pocet_cifier(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

/** Funkcia vypise n medzier. */
void vypis_medzery(int n) {
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
}

/** Funkcia vrati vacsie z cisel a, b. */
int max(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // nacitanie vstupu
    int a, b;
    cin >> a >> b;

    // vytvorte premenne pocet_a, pocet_b
    int pocet_a = pocet_cifier(a);
    int pocet_b = pocet_cifier(b);

    // vypis prveho riadku vystupu
    cout << "Pocty cifier: " << pocet_a << " " << pocet_b << endl;

    // spocitanie sirky stlpca pre cisla a, b
    int sirka = max(pocet_a, pocet_b);

    // vypis cisla a do stlpca sirky sirka
    vypis_medzery(sirka - pocet_a);
    cout << a << endl;

    // vypiste aj cislo b podobne ako cislo a
    vypis_medzery(sirka - pocet_b);
    cout << b << endl;

    return 0;
}
