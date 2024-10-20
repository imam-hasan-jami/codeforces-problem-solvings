//80A - Panoramix's Prediction

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int next_prime = n + 1;
    while (!isPrime(next_prime)) {
        next_prime++;
    }

    if (next_prime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}