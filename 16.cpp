#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int res = -1;
    for(int i = 0; i + 1 < n; i++){
        if(*max_element(A + i + 1, A + n) > i)    
            res = max(res, *max_element(A + i + 1, A + n) - A[i]);
    }
    cout << res << endl;
    return 0;
}