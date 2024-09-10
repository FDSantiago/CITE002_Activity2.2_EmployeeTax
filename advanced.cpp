#include <iostream>
using namespace std;

const int EMPLOYEES_NUM = 4;

int main() {
    int employeeSalaries[EMPLOYEES_NUM];
    int taxPercentage;

    for (int i = 0; i < EMPLOYEES_NUM; i++) {
        const int realNum = i + 1;

        cout << "Enter employee #" << realNum << "'s salary: ";
        cin >> employeeSalaries[i];
    }

    cout << "Whats the tax percentage? (0 - 100): ";
    cin >> taxPercentage;

    cout << "\n--=[ Results ]=--\n";
    
    for (int i = 0; i < EMPLOYEES_NUM; i++) {
        cout << "Employee #" << i << " has a salary of $" << employeeSalaries[i] << "\n";
        
        if (employeeSalaries[i] > 10000) {
            const int taxedAmount = employeeSalaries[i] * taxPercentage / 100;
            cout << "Tax = " << taxPercentage << "% of $" << employeeSalaries[i] << " = $" << taxedAmount;
        } else {
            // Not qualified for tax
            cout << "This employee does not qualify for tax.";
        }
        
        cout << "\n\n";
    }

    return 0;
}