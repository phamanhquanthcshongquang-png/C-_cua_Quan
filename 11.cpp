#include <bits/stdc++.h>

using namespace std;

int gtnn = INT_MAX;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    long long n; cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int gtnn = INT_MAX;
    sort(A, A + n);
    for(int i = 1; i < n; i++){
        gtnn = min(gtnn, max(A[i], A[i - 1]) - min(A[i], A[i - 1]));
    }
    cout << gtnn << endl;
    return 0;
}