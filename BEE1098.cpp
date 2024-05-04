//
// Created by Rafael Costa on 04/05/24.
#include <iostream>

using namespace std;

void printSequence(){
    double i = 0;
    double k = 0;
    while(i <= 2.0){
        for (int j = 1; j <= 3; j++){
            cout << "I=" << i << " J=" << j + k << endl;
        }
        k += 0.2;
        i += 0.2;
    }
}

int main() {
    printSequence();
    return 0;
}
//
