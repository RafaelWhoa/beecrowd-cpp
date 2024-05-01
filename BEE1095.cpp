//
// Created by Rafael Costa on 01/05/24.
#include <iostream>

using namespace std;

void printSequence(){
    int i = 1;
    for (int j = 60; j >= 0; j -= 5) {
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
    }
}

int main() {
    printSequence();

    return 0;
}
//
