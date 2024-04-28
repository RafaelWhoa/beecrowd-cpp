//
// Created by Rafael Costa on 27/04/24.
#include <iostream>

using namespace std;

void calculateNext6Odds(int number){
    int odd_counter = 0;
    int i = 0;

    while (odd_counter < 6) {
        if ((number + i) % 2 != 0){
            cout << number + i << endl;
            odd_counter++;
        }
        i++;
    }
}

int main() {
    int number;

    cin >> number;

    calculateNext6Odds(number);

    return 0;
}
//
