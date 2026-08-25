#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int so = a / b * b;
    if (so >= a){
        cout << so << endl;
    }
    else{
        cout << so + b << endl;
    }
    return 0;
}