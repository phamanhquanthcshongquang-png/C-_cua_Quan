#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    long long so = a % b;
    long long so2 = a - so;
    cout << so2 << endl;
    return 0;
}