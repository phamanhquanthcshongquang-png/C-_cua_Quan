#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; int k;
    cin >> n >> k;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += A[i];
    }
    int res = sum; int idx = 0;
    for(int i = k; i < n; i++){
        sum = sum + A[i] - A[i - k];
        if(sum > res){
            res = sum;
            idx = i - k + 1;
        }
    }
    for(int i = 0; i < k; i++){
        cout << A[idx + i] << " ";
    }
    return 0;
}