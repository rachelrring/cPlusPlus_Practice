#include <iostream>
using namespace std;


void userInput(int&, int&, char&);
void twelveHourConversion(int&);
void twentyFourHourConversion(int&);
void output(const int&, const int&);

int main() {
	int h;
	int m;
	char ampm;
	int con = 1;
	
	while (con != 0) {
		userInput(h, m, ampm);
		if (h > 12 && ampm == 'a') {
			cout << "If its hh:mm AM hours must be 0-12";
			return 0;
		}
		else if (h < 12 && ampm == 'p') {
			cout << "If its hh:mm PM hours must be 12-24";
			return 0;
		}
	
		if (ampm == 'a') {
			twentyFourHourConversion(h);
		}
		else {
			twelveHourConversion(h);
		}
		output(h, m);
		cout << "Press 0 to exit";
		cin >> con;
	}

	return 0;
}

void userInput(int &hours, int &mins, char &amp) {
	cout << "Input Hours" << endl;
	cin >> hours;
	cout << "Input Minutes" << endl;
	cin >> mins;
	cout << "a->AM or p->PM" << endl;
	cin >> amp;
}

void twelveHourConversion(int &h) {
	h = h - 12;
}

void twentyFourHourConversion(int &h) {
	if (h == 12) {
		h = 0;
	}
	else {
		h = h + 12;
	}
}

void output(const int &h, const int &m) {
	cout << h << ":" << m << endl;
}