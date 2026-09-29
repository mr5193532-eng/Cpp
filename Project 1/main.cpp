#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int units;
	int totalbill = 0;
	
	std::cout<< "Enter consume units: ";
	std::cin>> units;
	
	if (units <= 100) {
		totalbill = units * 25;
	}
	else if (units <= 200) {
		totalbill = (100 * 25) + ((units - 100) * 35);
	}
	else if (units <= 300) {
		totalbill = (100 * 25) + (200 * 35) + ((units - 200) * 45);
	}
	else {
		totalbill = (100 * 25) + (200 * 35) + (300 * 45) + ((units - 300) * 50);
	}
	std::cout<< "Your total bill is: " << totalbill;
	
	return 0;
}
