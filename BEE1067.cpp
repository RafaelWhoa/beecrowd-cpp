//
// Created by Rafael Costa on 27/04/24.
#include <iostream>

using namespace std;

int main() {
    int number;

    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0){
            cout << i << endl;
        }
    }
}
//
