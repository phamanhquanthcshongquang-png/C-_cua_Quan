#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if((i % 2) == 1){
            cout << i << " ";
        }
    }
    return 0;
}