#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("AREA2.INP", "r", stdin);
    freopen("area2.out", "w", stdout);
    double a; cin >> a;
    double res =  a * a * 3.14 / 3 - a * a * sqrt(3) / 4;
    cout << fixed << setprecision(2);
    cout << res << endl;
    return 0;
}