//
// Created by Rafael Costa on 28/04/24.
#include <iostream>

using namespace std;

void showMultiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }
}

int main() {
    int n;

    cin >> n;

    showMultiplicationTable(n);
}
//
