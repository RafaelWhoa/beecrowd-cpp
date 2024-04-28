//
// Created by Rafael Costa on 27/04/24.
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string> months;

    months.insert(pair<int, string>(1, "January"));
    months.insert(pair<int, string>(2, "February"));
    months.insert(pair<int, string>(3, "March"));
    months.insert(pair<int, string>(4, "April"));
    months.insert(pair<int, string>(5, "May"));
    months.insert(pair<int, string>(6, "June"));
    months.insert(pair<int, string>(7, "July"));
    months.insert(pair<int, string>(8, "August"));
    months.insert(pair<int, string>(9, "September"));
    months.insert(pair<int, string>(10, "October"));
    months.insert(pair<int, string>(11, "November"));
    months.insert(pair<int, string>(12, "December"));

    int month;

    cin >> month;

    cout << months[month] << endl;

    return 0;
}
//
