#include <bits/stdc++.h>

using namespace std;
int ham(int m, int n){
    if(m > n)
        return 0;
    int so = ((m % 3 == 0) || (m % 5 == 0)) ? m : 0;
    return so + ham(m + 1, n);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m; int n; cin >> m; cin >> n;
    cout << ham(m, n) << endl;
    return 0;
}