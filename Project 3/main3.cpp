#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	cout << "Enter elements number: ";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter some numbers below here:\n";
	
	for (int i = 0; i < n; i++) {
		cin>> arr[i];
	}
	
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr[i] < min)
			min = arr[i];
		
		if (arr[i] > max) 
			 max = arr[i];
		
	}
	
	
	cout << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	
	return 0;
}
