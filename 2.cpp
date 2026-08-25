#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int tong;
    tong = 0;
    for(int i = 1; i <=n; i += 2){
        tong += i;
    }
    cout << tong << endl;
    return 0;
}