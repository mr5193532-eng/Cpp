#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5];
	int temp;
	
	std::cout << "Enter some numbers below here: ";

	for (int i = 0; i < 5; i++) {
		std::cin >> a[i];
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout<< a[i] << " ";
	}
	
	return 0;
}
