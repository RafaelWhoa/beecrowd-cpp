//
// Created by Rafael Costa on 27/04/24.
#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    int even_count = 0;

    for (int & number : numbers) {
        cin >> number;
        if (number % 2 == 0) {
            even_count++;
        }
    }

    cout << even_count << " valores pares" << endl;
}
//
