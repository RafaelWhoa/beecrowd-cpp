//
// Created by Rafael Costa on 27/04/24.
#include <iostream>
#include <iomanip>

using namespace std;

double calculateSalaryTax(double salary){
    if (salary <= 2000.00){
        return 0.00;
    }
    if (salary > 4500.00){
        return ((salary - 4500.00) * 0.28) + ((3000.00 - 2000.01) * 0.08) + ((4500.00 - 3000.01) * 0.18);
    }
    if (salary > 3000.00){
        return ((salary - 3000.00) * 0.18) + ((3000.00 - 2000.01) * 0.08);
    }
    if (salary > 2000.00){
        return (salary - 2000.00) * 0.08;
    }
    return 0;
}

int main() {
    double salary, tax;

    cin >> salary;

    tax = calculateSalaryTax(salary);

    tax > 0.00 ? cout << fixed << setprecision(2) << "R$ " << tax << endl : cout << "Isento" << endl;

    return 0;

}
//
