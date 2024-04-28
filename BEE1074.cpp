//
// Created by Rafael Costa on 28/04/24.
#include <iostream>

using namespace std;

bool isEven(int number){
    return number % 2 == 0;
}

bool isPositive(int number){
    return number > 0;
}

int main(){
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x != 0){
            cout << (isEven(x) ? "EVEN " : "ODD ") << (isPositive(x) ? "POSITIVE" : "NEGATIVE") << endl;
        }
        else {
            cout << "NULL" << endl;
        }
    }
}
//
