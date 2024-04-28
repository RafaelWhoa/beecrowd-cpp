//
// Created by Rafael Costa on 27/04/24.

#include <iostream>

using namespace std;

int main() {
    double numbers[6];
    int positive_count = 0;

    for (double & number : numbers) {
        cin >> number;
        if (number >= 0) {
            positive_count++;
        }
    }

    cout << positive_count << " valores positivos" << endl;
}
//
