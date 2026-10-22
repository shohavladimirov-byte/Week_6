#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double k = 1;
    double e = 1;
    for (int i = 1;  i < n; i++) {
        k*=i;
        e+=1.0/k;

    }
    cout << fixed << setprecision(10) << e << endl;
}