#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("BAI7_66.INP", "r", stdin);
    freopen("BAI7_66.OUT", "w", stdout);
    int a, b, c, d; cin >> a >> b >> c >> d;
    int tong = a + b + c + d;
    cout << tong << endl;
    cout << tong / 10 % 10 << " " << tong % 100 << endl;
    return 0;
}