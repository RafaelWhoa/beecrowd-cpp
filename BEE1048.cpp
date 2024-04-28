//
// Created by Rafael Costa on 27/04/24.
#include <iostream>
#include <iomanip>

using namespace std;

double calculateSalaryIncrease(double salary) {
    if (salary > 2000.00) {
        return salary * (4.00 / 100);
    }
    if (salary > 1200.00) {
        return salary * (7.00 / 100);
    }
    if (salary > 800.00) {
        return salary * (10.00 / 100);
    }
    if (salary > 400.00) {
        return salary * (12.00 / 100);
    }
    return salary * (15.00 / 100);
}

int main() {
    double salary, salary_increase;

    cin >> salary;

    salary_increase = calculateSalaryIncrease(salary);

    cout << "Novo salario: " << fixed << setprecision(2) << salary + salary_increase << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salary_increase << endl;
    cout << "Em percentual: " << (int) (salary_increase / salary * 100) << " %" << endl;

    return 0;
}
//
