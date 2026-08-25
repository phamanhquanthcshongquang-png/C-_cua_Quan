#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main(){
    long long n;
    cin >> n;
    if ((n % 5 == 0) && (n % 3 == 0)){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}