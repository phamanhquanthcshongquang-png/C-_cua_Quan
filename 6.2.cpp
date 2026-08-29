#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int ham(int n, int i ){
    if(i > n){
        return n;
    }
    int uoc = (n % i == 0) ? i : 0;
    if((uoc > 0) && (uoc < n))
        cout << uoc << endl;
    return ham(n, i +1);
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cout << ham(n, 1) << endl;
    return 0;
}