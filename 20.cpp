# include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int mang[n];
    for(int i = 0; i < n; i++){
        cin >> mang[i];
    }
    int res = 0;
    int min_val = *min_element(mang, mang + n);
    for(int i = 2; i <= min_val; i++){
        int dem = 0;
        for(int j = 0; j < n; j++){
            if (mang[j] % i == 0) 
                dem += 1;
        }
        if(dem == n) 
            res += 1;
    }
    cout << res << endl;
    return 0;
}