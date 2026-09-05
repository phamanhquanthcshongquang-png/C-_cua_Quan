#include <bits/stdc++.h>

using namespace std;

int mang[1000002];

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n ; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > 0)
            mang[x] = 1;
    }
    for(int i = 1; i <= n + 1; i++){
        if(mang[i] == 0){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
