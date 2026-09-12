#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int num;
	
	cout << "Enter any number: ";
	cin>> num;
	cout<< "The table of " << num << " is: " << endl;
	
	for (int i = 1; i <= 10; i++) {
		cout<< num << " X " << i << " = " << num * i << endl;
	}
	
	return 0;
}
