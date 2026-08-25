#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n <= 0){
        cout << "INVALID" << endl;
    }
    else if ((n % 100 == 0) || ((n % 4 == 0) && (n % 100 != 0))){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}