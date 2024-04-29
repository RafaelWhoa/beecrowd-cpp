//
// Created by Rafael Costa on 28/04/24.
#include <iostream>

using namespace std;

void remaining2(int n){
    for (int i = 1; i <= 10000; i++) {
        if (i % n == 2){
            cout << i << endl;
        }
    }
}

int main() {
    int n;

    cin >> n;

    remaining2(n);
}
//
