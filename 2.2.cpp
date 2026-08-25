#include <bits/stdc++.h>

using namespace std;

int ham(int n, int i){
    if((i == n) || (i + 1 == n))
        return i;
    else
        return i + ham(n, i + 2);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cout << ham(n, 1) << endl;
    return 0;
}