#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("AREA1.INP", "r", stdin);
    freopen("area1.out", "w", stdout);
    double a; cin >> a;
    double res = a * a * sqrt(3) / 4 - a * a * 3.14 / 12;
    cout << fixed << setprecision(2);
    cout << res << endl;
    return 0;
}