#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int A[n];
    int tong = 0;
    int so[n];
    memset(so, 0, sizeof(so));
    for(int i = 0; i < n; i++){
        cin >> A[i];
        so[A[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(so[A[i]] >= 2)
            ++tong;
    }
    cout << tong << endl;
    return 0;
}