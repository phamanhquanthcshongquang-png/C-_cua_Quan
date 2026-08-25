#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int r;
    cin >> r;
    double c = r * 2 * 3.14;
    double s = r * r * 3.14;
    cout << fixed << setprecision(2) << c << " " << fixed << setprecision(2) << s << endl;
    return 0;
} 