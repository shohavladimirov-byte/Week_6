#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n<2) {
        return false;
    }
    for (int i = 2; i*i<=n; i++) {
        if (n%i == 0) {
            return false;
        }
        return true;
    }

}
int main() {
    int N, c = 0;
    cin >> N;

    for (int j = 2; j+2 <= N; j++) {
        if (isPrime(j) and isPrime(j+2)) {
            c++;
        }
    }
    cout << c << endl;
}