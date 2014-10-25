#include <iostream>
#include <string>
using namespace std;

void main() {
	// If conditions
	int a = 5;
	int b = 10;
	int c = 3;

	if (a < b) {
		cout << "a < b" << endl;
	}
	
	if (c != 3) {
		cout << "Won't go there" << endl;
	}
	else {
		cout << "c == 3" << endl;
	}

	if (c == 1) {
		cout << "Won't go there" << endl;
	}
	else if (c == 2) {
		cout << "Won't go there" << endl;
	}
	else {
		cout << "Go in there" << endl;
	}

	if ((c == 3 && a < 10 && b != 10) || (a == 5 && c != 5)) {
		cout << "(c == 3 && a < 10 && b != 10) || (a == 5 && c != 5)" << endl;
	}

	// For loop
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}

	// While loops
	int j = 0;
	while (j < 10) {
		cout << j << endl;
		j++;
	}

	int k = 0;
	do {
		cout << k << endl;
		k++;
	} while (k < 10);

	system("pause");
}
