#include <bits/stdc++.h>

using namespace std;
const long long mod = 1000000007;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, x; cin >> n >> x;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    long long tong = 0, lt = 1;
    for(int i = n - 1; i >= 0; i--){
        tong += A[i] * lt;
        tong %= mod;
        lt *= x;
        lt %= mod;
    }
    cout << tong << endl;
    return 0;
}