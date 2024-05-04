//
// Created by Rafael Costa on 01/05/24.
#include <iostream>

using namespace std;

void printSequence() {
    int i = 1;

    while(i <= 9) {
        for (int j = 7; j >= 5; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
        i+= 2;
    }
}

int main() {
    printSequence();

    return 0;
}
//
