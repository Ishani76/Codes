#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    // Function for addition
    double add(double a, double b) {
        return a + b;
    }

    // Function for subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Function for multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Function for division with error handling
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};  // ✅ Added semicolon at the end of the class

int main() {
    Calculator calc;  // ✅ Correctly declare object

    double a, b;
    int choice;

    // Get user input
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Choose operation: 1) Add 2) Subtract 3) Multiply 4) Divide: ";
    cin >> choice;

    // Perform the operation
    if (choice == 1) {
        cout << "Sum = " << calc.add(a, b) << endl;
    } else if (choice == 2) {
        cout << "Difference = " << calc.subtract(a, b) << endl;
    } else if (choice == 3) {
        cout << "Product = " << calc.multiply(a, b) << endl;
    } else if (choice == 4) {
        cout << "Quotient = " << calc.divide(a, b) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;  // ✅ Fixed missing semicolon
}
