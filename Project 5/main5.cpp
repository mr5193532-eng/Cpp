#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[10]= {10, 15, 30, 38, 90, 50, 32, 18, 45, 39};
	int num;
	bool found = false;
	
	cout<< "Guess the number: ";
	cin>> num;

	for (int i = 0; i < 9; i++) {
		if (arr[i] == num) {
			found = true;
		}
	}
		if (found) {
		cout<< "You found it!!!";
	}
	else {
		cout<< "Number not found!!!";
	}
	
	return 0;
}
