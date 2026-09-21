#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("AREA.INP", "r", stdin);
    freopen("AREA.OUT", "w", stdout);
    double a, b, c; cin >> a >> b >> c;
    double h = sqrt(c * c - (a / 2 - b / 2) * (a / 2 - b / 2));
    cout << fixed << setprecision(2);
    cout << (a + b) * h / 2 - h * h * 3.14 / 16 << endl;
    return 0;
}