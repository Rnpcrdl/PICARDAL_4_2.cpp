#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string payrollPeriod, employeeName;
    string employeeID;
    double monthlySalary;
    double lateMinutes, lateHours;
    double hourlyRate, lateDeduction;
    double philhealth = 1000.00;
    double pagibig = 800.00;
    double sss = 1200.00;
    double tax, totalDeductions, netPay;

    cout << "Enter Payroll Period: ";
    getline(cin, payrollPeriod);

    cout << "Enter Employee ID: ";
    getline(cin, employeeID);

    cout << "Enter Employee Name: ";
    getline(cin, employeeName);

    cout << "Enter Monthly Salary: ";
    cin >> monthlySalary;

    cout << "Enter Lates and Absences (in minutes): ";
    cin >> lateMinutes;

    // Convert minutes to hours
    lateHours = lateMinutes / 60.0;

    // Compute hourly rate
    hourlyRate = (monthlySalary / 30.0) / 8.0;

    // Compute deductions
    lateDeduction = lateHours * hourlyRate;
    tax = monthlySalary * 0.12;

    totalDeductions = lateDeduction + philhealth
                    + pagibig + sss + tax;

    netPay = monthlySalary - totalDeductions;

    // Display payslip
    cout << fixed << setprecision(2);

    cout << "\n\nFEU - Institute of Technology\n\n";

    cout << "Employee ID: " << employeeID
         << "\t\tPayroll Period: " << payrollPeriod << "\n";

    cout << "Employee Name: " << employeeName << "\n\n";

    cout << left << setw(40) << "INCOME"
         << "DEDUCTIONS\n";

    cout << left << setw(40)
         << ("Monthly Salary Php" +
             to_string((int)monthlySalary))
         << "Lates and absences    ("
         << lateDeduction << ")\n";

    cout << left << setw(40) << ""
         << "Philhealth            ("
         << philhealth << ")\n";

    cout << left << setw(40) << ""
         << "Pag-ibig              ("
         << pagibig << ")\n";

    cout << left << setw(40) << ""
         << "SSS                   ("
         << sss << ")\n";

    cout << left << setw(40) << ""
         << "Withholding tax       ("
         << tax << ")\n\n";

    cout << "Total Earnings: Php"
         << monthlySalary << "\n\n";

    cout << "Total Deductions: Php "
         << totalDeductions << "\n\n";

    cout << "Net Pay: " << netPay << "\n";

    return 0;
}
