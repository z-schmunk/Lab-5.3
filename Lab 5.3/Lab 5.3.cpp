#include <iostream>
#include <string>

using namespace std;

int main() {

	int n = 0;

	cout << "Please enter a number:\n";

	cin >> n;

	while (n > 0) {
		
		int temp = n % 2;

		cout << temp << endl;

		n /= 2;
	}

	return 0;

}