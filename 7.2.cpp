#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void ham(int n, int i){
    int so;
    if(i > n){
        return;
    }
    if(n % i == 0)
        cout << i << endl;
    return ham(n, i + 1);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    ham(n, 1);
    return 0;
}