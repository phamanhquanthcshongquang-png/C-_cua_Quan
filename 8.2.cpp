#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int tong = 0;

void ham(int n, int i){
    if(i > n)
        return;
    if(n % i == 0)
        tong += 1;
    return ham(n, i + 1);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    ham (n, 1);
    cout << tong << endl;
    return 0;
}