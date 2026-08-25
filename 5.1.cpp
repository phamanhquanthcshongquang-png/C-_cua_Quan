#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; int m; cin >> m >> n;
    int tong = 0;
    for(int i = m; i <= n && m <= i; i++){
        if((i % 3 == 0) || (i % 5 == 0))
            tong += i;
    }
    cout << tong << endl;
    return 0;
}