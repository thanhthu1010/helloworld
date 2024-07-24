#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    bool isPrime = x > 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime) {
        cout << "So nguyen to!";
    } else {
        cout << "Hop so!";
    }
}