#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a = 10;
	int b = 20;
	int temp;
	
	cout<< "Before: \n";
	cout<< "  a = " << a;
	cout<< "  b = " << b << endl;
			
	temp = a;
	a = b;
	b = temp;
	
	cout<< "After: \n";
	cout<< "  a = " << a;
	cout<< "  b = " << b;

	return 0;
}
