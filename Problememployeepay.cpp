#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv) {
    const float HOURLY_PAY = 16.00;//constants since they don't change in the program, float since that is all that is needed memory-wise
    const short REGULAR_HOURS = 40;//assumed number of hours in regular work week since not given, change here otherwise
    const float OVERTIME_PAY = HOURLY_PAY * 1.5;
    const float SOCIAL_SECURITY = 0.06;//percentage
    const float FEDERAL_INCOME_TAX = 0.14;//percentage
    const float STATE_INCOME_TAX = 0.05;//percentage
    const float MEDICAL_INSURANCE = 10.00;//flat rate
    short hoursWorked = 0;//set to zero then updated later by user input
    short regularHoursWorked = 0;//updated later if necessary
    short overtimeHoursWorked = 0;//updated later if necessary
    float grossPay;//float is all that is needed memory-wise for weekly pay at $16/hour
    float socialSecurityTaxValue;
    float federalIncomeTaxValue;
    float stateIncomeTaxValue;
    float netTakeHomePay;

    cout << "Number of hours worked in a week: ";
    cin >> hoursWorked;

    if(hoursWorked > REGULAR_HOURS) {//check if worked overtime
        regularHoursWorked = REGULAR_HOURS;//max of regular hours is the regular work week hours
        overtimeHoursWorked = hoursWorked - REGULAR_HOURS;//overtime is hours worked minus the regular hours
    }
    else {//otherwise no overtime is worked so hours worked are all at regular pay rate
        regularHoursWorked = hoursWorked;
    }

    grossPay = (regularHoursWorked * HOURLY_PAY) + (overtimeHoursWorked * OVERTIME_PAY);
    cout << "Gross Pay for the week: $" << fixed << setprecision(2) << grossPay << endl;

    socialSecurityTaxValue = grossPay * SOCIAL_SECURITY;//total pay times percentage
    cout << "Social Security Tax: $" << socialSecurityTaxValue << endl;

    federalIncomeTaxValue = grossPay * FEDERAL_INCOME_TAX;
    cout << "Federal Income Tax: $" << federalIncomeTaxValue << endl;

    stateIncomeTaxValue = grossPay * STATE_INCOME_TAX;
    cout << "State Income Tax: $" << stateIncomeTaxValue << endl;

    cout << "Medical Insurance Withheld $" << MEDICAL_INSURANCE << endl;//constant rate of 10.00

    netTakeHomePay = grossPay - socialSecurityTaxValue - federalIncomeTaxValue - stateIncomeTaxValue - MEDICAL_INSURANCE;
    cout << "Net take-home pay for the week $" << netTakeHomePay << endl;
}
