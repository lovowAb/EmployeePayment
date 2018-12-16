#include<iostream>
using namespace std;

/*
    Abdullahi Yusuf
    lovowAb
    Prog. Employee Payment
*/

int main () {
    int ID;
    float n_Hours, hourly_Rate, gross_Pay, tax, net_Pay;

    // get from the user
    cout << "Welcome to Employee Payment System. \n" << endl;
    cout << "Please Enter Employee ID: ";
    cin  >> ID;
    cout << "Please Enter number of hours: ";
    cin  >> n_Hours;
    cout << "Please enter hourly rate: ";
    cin  >> hourly_Rate;

    // Calculate monthly payment
    gross_Pay = n_Hours * hourly_Rate;
    tax      = gross_Pay * 0.1;
    net_Pay   = gross_Pay - tax;

    // Print the output
     cout << endl;
    cout << "Payment of Employee " << ID << " = " << net_Pay << endl;
}
