//
// Created by Rafael Costa on 04/05/24.
#include <iostream>

using namespace std;

bool isBigger(int x, int y){
    return x > y;
}

int main() {
    int x = 0, y = 1;

    cin >> x >> y;

    while (x != y) {
        isBigger(x, y) ? cout << "Decrescente" << endl : cout << "Crescente" << endl;
        cin >> x >> y;
    }

    return 0;
}
//
