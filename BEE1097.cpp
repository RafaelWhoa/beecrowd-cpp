//
// Created by Rafael Costa on 04/05/24.
#include <iostream>

using namespace std;

void printSequence(){
    int k = 2;
    for (int i = 1; i <= 9; i += 2){
        for (int j = 5; j >= 3; j--){
            cout << "I=" << i << " J=" << j + k << endl;
        }
        k += 2;
    }
}

int main() {
    printSequence();
    return 0;
}
//
