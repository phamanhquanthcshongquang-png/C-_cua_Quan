#include <bits/stdc++.h>

using namespace std;

int solve(int a, int b){
    if(b == 0) return a;
    return solve(b, a % b);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int mang[n];
    for(int i = 0; i < n; i++){
        cin >> mang[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            res = max(res, solve(mang[i], mang[j]));
        }
    }
    cout << res << endl;
    return 0;
}