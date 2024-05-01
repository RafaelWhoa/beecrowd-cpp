//
// Created by Rafael Costa on 01/05/24.
#include <iostream>
#include <iomanip>

using namespace std;

void calculateWeightedAverage(int numberOfTests){
    for(int i = 0; i < numberOfTests; i++) {
        double n1, n2, n3;

        cin >> n1 >> n2 >> n3;

        cout << fixed << setprecision(1) << (n1 * 2 + n2 * 3 + n3 * 5) / 10 << endl;
    }
}

int main() {
    int numberOfTests;

    cin >> numberOfTests;

    calculateWeightedAverage(numberOfTests);

    return 0;
}
//
