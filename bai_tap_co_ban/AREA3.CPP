#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("AREA3.INP", "r", stdin);
    freopen("AREA3.OUT", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    cout << a * b - (a + b - 1) * c << endl;
    return 0;
}