#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void main() {
	// Arrays
	int intArray[] = { 1, 2, 3, 4, 5 };
	for (auto val : intArray) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	intArray[2] = 12;
	for (auto val : intArray) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	string nameArray[] = { "Bob", "Dave", "Steve", "Julie" };
	for (auto val : nameArray) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	nameArray[1] = "Chloe";
	for (auto val : nameArray) { // Using auto instead of the type. The compiler is smart enough to know for us!
		cout << val << endl;
	}
	cout << "------------" << endl;

	// Vectors
	vector<int> intVector = { 1, 2, 3, 4, 5 };
	for (auto val : intVector) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	intVector.insert(intVector.begin() + 2, 12); // Insert
	for (auto val : intVector) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	intVector.insert(intVector.begin() + 3, {13, 14, 15}); // Insert range
	for (auto val : intVector) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	intVector.erase(intVector.begin() + 4); // Erase
	for (auto val : intVector) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	intVector.erase(intVector.begin() + 2, intVector.begin() + 5); // Erase range
	for (auto val : intVector) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	vector<string> names = { "Chloe", "Bob", "Steve", "Julie" };
	for (auto val : names) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	sort(names.begin(), names.end());
	for (auto val : names) {
		cout << val << endl;
	}
	cout << "------------" << endl;

	// Maps
	unordered_map<string, int> levels = {
		{ "Chloe", 1 },
		{ "Bob", 54 },
		{ "Steve", 27 },
		{ "Julie", 10 }
	};
	for (auto kv : levels) {
		cout << kv.first << " is level " << kv.second << endl;
	}
	cout << "------------" << endl;

	levels["Brian"] = 99;
	for (auto kv : levels) {
		cout << kv.first << " is level " << kv.second << endl;
	}
	cout << "------------" << endl;

	system("pause");
}
