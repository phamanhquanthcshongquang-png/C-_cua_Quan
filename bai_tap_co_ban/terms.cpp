#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("TERMS.INP", "r", stdin);
    freopen("TERMS.OUT", "w", stdout);
    int n; cin >> n;
    int res1 = 0;
    int res2 = 0;
    for(int i = (n - 1) / 2; i <= n; i++){
        res1 += 1;
    }
    for(int i = n + 1; i <= n * n; i++){
        res2 += 1;
    }
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}