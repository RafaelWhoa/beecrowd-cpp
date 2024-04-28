//
// Created by Rafael Costa on 27/04/24.
#include <iostream>

using namespace std;

int returnBigger(int x, int y) {
    return x > y ? x : y;
}

int returnSmaller(int x, int y) {
    return x < y ? x : y;
}

int oddSumBetween(int x, int y) {
    int sum = 0;

    for (int i = returnSmaller(x, y) + 1; i < returnBigger(x, y); i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    return sum;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << oddSumBetween(x, y) << endl;
}
//
