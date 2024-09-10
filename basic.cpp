#include <iostream>
#include <array>
using namespace std;

int main() {
    const int EMPLOYEES[4] = {
        15000,
        20000,
        20000,
        25000
    };
    const int TAX_PERCENTAGE = 20;

    const int arraySize = end(EMPLOYEES) - begin(EMPLOYEES);
    for (int i = 0; i < arraySize; i++) {
        cout << "Employee #" << i + 1 << " has a salary of: $" << EMPLOYEES[i];
        if (EMPLOYEES[i] > 10000) {
            const int taxedAmount = EMPLOYEES[i] * TAX_PERCENTAGE / 100;
            cout << "\nTax = " << TAX_PERCENTAGE << "% of $" << EMPLOYEES[i] << " = $" << taxedAmount;
        } else {
            cout << "\nEmployee #" << EMPLOYEES[i] << " does not qualify for tax";
        }
        cout << "\n\n";
    }

    return 0;
}