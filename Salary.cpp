#include <iostream>
using namespace std;

class emp {
public:
    float basic_salary, DA, hra, pf, tds, gross_pay, net_pay;

    void get() {
        cout << "Enter basic salary"<<endl;
        cin >> basic_salary;
        cout << "DA"<<endl;
        cin >> DA;
        cout << "HRA"<<endl;
        cin >> hra;
        cout << "PF"<<endl;
        cin >> pf;
        cout << "TDS"<<endl;
        cin >> tds;
        cout << "GROSS PAY"<<endl;
        cin >> gross_pay;
        net_pay = gross_pay - (pf + tds);
    }

    void put() {
        cout << "Basic Salary=" << basic_salary << endl;
        cout << "DA=" << DA << endl;
        cout << "HRA=" << hra << endl;
        cout << "PF=" << pf << endl;
        cout << "TDS=" << tds << endl;
        cout << "Gross Pay=" << gross_pay << endl;
        cout << "Net Pay=" << net_pay << endl;
    }
};

int main() {
    emp employee;  
    employee.get();
    employee.put();
    return 0;
}
