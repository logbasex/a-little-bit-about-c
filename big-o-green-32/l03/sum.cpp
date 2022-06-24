//
// Created by logbasex on 24/06/2022.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        sum = sum + i;
    }
    cout << sum;

// print every digit of a integer
    for (; n > 0; n = n / 10) {
        cout << n % 10;
    }
    return 0;
}