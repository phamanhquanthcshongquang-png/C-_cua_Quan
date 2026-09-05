#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map < long long, bool > mp;
    int a[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    for (int h = 0; h < n; h++){
        if(mp[h] == true)
            cout << h << " ";
        else
            cout << -1 << " ";
    }
    return 0;
    
}