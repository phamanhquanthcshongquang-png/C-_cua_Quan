#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A, A + n);
    for(int i = n - k; i < n; i++){
        cout << A[i] << endl;
    }
    return 0;
}