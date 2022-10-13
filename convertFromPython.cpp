#include <iostream>
#include <string>
using namespace std;

int main() {
	// task 1
	cout << "Hello" << endl;
	string first = "Mary";
	string last = "Rose";
	cout << "Hello " << first << endl;
	cout << first << " " << last << endl;
	int total = 10;
	cout << total;
	cout << total << "." << endl;
	cout << "Wait... ";
	cout << "What is your name?" << endl;
	string person;
	cin >> person;
	cout << "Hi " << person << endl;
	cout << "Done" << endl;


	cout << endl << endl;
	// task 2
	const double timeAndAHalf = 1.5;
	const int capHours = 40;
	signed int paycode;
	double salary, hourlyPay, weeklySales, itemValue;
	int hoursWorked, overtime, itemsMade;
	cout << "Please enter your paycode : ";
	cin >> paycode;
	while (paycode != -1) {
		salary, hourlyPay, weeklySales, itemValue = 0.0;
		hoursWorked, overtime, itemsMade = 0;
		switch (paycode) {
		case 1:
			cout << "Manager" << endl;
			cout << "What is the weekly salary : ";
			cin >> salary;
			break;
		case 2:
			cout << "Hourly Paid Workers" << endl;
			cout << "What is the hourly pay : ";
			cin >> hourlyPay;
			cout << "Hours Worked : ";
			cin >> hoursWorked;
			if (hoursWorked > capHours) {
				overtime = hoursWorked - capHours;
				hoursWorked -= overtime;
				salary = (hoursWorked * hourlyPay) + ((overtime * hourlyPay) * timeAndAHalf);
				break;
			}
			else {
				salary = hoursWorked * hourlyPay;
				break;
			}
		case 3:
			cout << "Sales Staff" << endl;
			salary = 250 * 5;
			cout << "Enter sales for the week : ";
			cin >> weeklySales;
			salary += weeklySales * 0.057;
			break;
		case 4:
			cout << "Production Line Staff" << endl;
			cout << "Enter amount of items produced : ";
			cin >> itemsMade;
			cout << "Enter value for item :";
			cin >> itemValue;
			salary = itemsMade * itemValue;
			break;
		default:
			cout << "We couldn't find your paycode, please eneter 1, 2, 3, 4, or -1" << endl;
		}
		cout << "Weekly pay : " << salary << endl;
		cout << "Pay Codes" << endl << "1 : Manager" << endl << "2 : Hourly Paid Workers"
			<< endl << "3 : Sales Staff" << endl << "4 : Production Line Staff"
			<< endl << "-1 : exit" << endl;
		cout << "Please enter your paycode :";
		cin >> paycode;
	}

	return 0;
}