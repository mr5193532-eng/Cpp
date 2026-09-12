#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num1;
	char op;
	int num2;
	
	cout<< "Enter first number: ";
	cin>> num1;
	cout<< "Operator: ";
	cin>> op;
	cout<< "Enter second number: ";
	cin>> num2;
	
	if (op == '/') {
		cout<< num1 / num2 << endl;
	}
	else if (op == '*') {
		cout<< num1 * num2 << endl;
	}
	else if (op == '+') {
		cout<< num1 + num2 << endl;
	}
	else if (op == '-') {
		cout<< num1 - num2 << endl;
	}
	else{
		cout<< "Choose right number or operator!!!!" << endl;
	}
		
	return 0;
}

