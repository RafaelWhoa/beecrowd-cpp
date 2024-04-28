//
// Created by Rafael Costa on 27/04/24.
#include <iostream>

using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

bool isPositive(int number) {
    return number > 0;
}

int main() {
    int numbers[5];
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;

    for (int & number : numbers) {
        cin >> number;
        isEven(number) ? even_count++ : odd_count++;
        if (number != 0){
            isPositive(number) ? positive_count++ : negative_count++;
        }
    }

    cout << even_count << " valor(es) par(es)" << endl;
    cout << odd_count << " valor(es) impar(es)" << endl;
    cout << positive_count << " valor(es) positivo(s)" << endl;
    cout << negative_count << " valor(es) negativo(s)" << endl;
}
//
