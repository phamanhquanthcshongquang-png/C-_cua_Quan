#include <bits/stdc++.h>

using namespace std;

int ham(int n){
    int a = n + 1;
    cout << n - 1 << endl;
    return a;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; 
    cin >> n;
    cout << ham(n) << endl;
    return 0;
}