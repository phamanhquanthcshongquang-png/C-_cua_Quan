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
    vector<int> v(A, A + n);
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i ++){
        auto it = upper_bound(v.begin(), v.end(), A[i]);
        if(it == v.end())
        cout << "_" << " ";
        else 
            cout << *it << " ";
    }
    return 0;
}