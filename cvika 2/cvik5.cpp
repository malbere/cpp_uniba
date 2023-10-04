 #include <iostream>
 using namespace std;

 int main(void) {
     int r, s;
     cin >> r >> s;
     for(int i = 1; i <= r; i++) {
         for(int j = 1; j <= s; j++) {
             if (i == 1 || j == 1  || i == r || j == s) {
                 cout << "*";
             } else {
                 cout << ".";
             }
         }
         cout << endl;
     }
}
