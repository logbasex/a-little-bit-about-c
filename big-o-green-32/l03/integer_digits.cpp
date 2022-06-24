//
// Created by logbasex on 25/06/2022.
//
#include<iostream>
using namespace std;

int main() {
    // print every digit of an integer
    int n;
    cin >> n;
    for (; n > 0; n = n / 10) {
        cout << n % 10;
    }
    return 0;
}