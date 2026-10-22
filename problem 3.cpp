#include <iostream>
using namespace std;

long long sumR(int a, int b) {
    int q=b;
    for (int i = a; i<b; i++) {
        q+=i;
    }
    return q;
}
int main() {
    int n,c;
    cin >> n;
    cin >> c;

    cout << sumR(n,c) << endl;
}
