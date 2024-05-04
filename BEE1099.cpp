//
// Created by Rafael Costa on 04/05/24.
#include <iostream>

using namespace std;

int returnSmaller(int x, int y){
    return x < y ? x : y;
}

int returnBigger(int x, int y){
    return x > y ? x : y;
}

void printOddsBetween(int n) {
    int x, y;
    for (int i = 0; i < n; i++){
        int oddsSum = 0;
        cin >> x >> y;
        for(int j = returnSmaller(x, y) + 1; j < returnBigger(x, y); j++){
            if (j % 2 != 0){
                oddsSum += j;
            }
        }
        cout << oddsSum << endl;
    }
}

int main(){
    int n;

    cin >> n;
    printOddsBetween(n);

    return 0;
}
//
