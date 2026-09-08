#include <bits/stdc++.h>

using namespace std;
int f[1001];
void ham(){
    int fibo[20];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 19; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(int i = 0; i <= 19; i++){
        f[fibo[i]] = 1;
    } 
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int A[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    ham();
    for(int i = 0; i <= n; i++){
        if (f[A[i]]) cout << A[i] << " ";
    }
    return 0;
}