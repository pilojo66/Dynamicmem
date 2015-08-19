#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int main() {
	srand(time(NULL));
	int *a = new int;
	int *b = new int;

	*a = 5;
	*b = 7;
	//DO STUFF WITH a AND b
	delete a;
	delete b;
	//DELETE TO SAVE MEMORY SPACE

	vector<int> v;
	for (int i = 0; i < 56; i++) {
		v.push_back(rand() % 100 + 1);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();/*++ BEFORE iterator. VERY important */++it) {
		cout << "The value is: " << *it << "." << endl;
	}
	v.clear();
	cout << "The size of the vector is now: " << v.size() << endl;
	


	size_t s; //low-memory type for keeping a size
	cout << "Enter a size of vector: " << endl;
	cin >> s;
	v.resize(s);
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		*it = rand() % 512 + 1;
	}



	char *verify;
	verify = new char;
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout << "Is " << *it << " the correct value?(y/n)" << endl;
		cin >> *verify;
		if (*verify != 'y') {
			cout << "Please choose a new value: ";
			cin >> *it;
		}
	}

	int *location;
	int *value;
	value = new int;
	location = new int;
	vector<int>::iterator locationIT;
	cout << "Did you forget a value?(y/n)";
	cin >> *verify;
	if (*verify == 'y') {
		cout << "Where would you like it to go?(last index is: " << v.size() << ")";
		cin >> *location;
		locationIT = v.begin() + *location - 1;
		cout << "What is the value: ";
		cin >> *value;
		v.insert(locationIT, *value);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end();/*++ BEFORE iterator. VERY important */++it) {
		cout << "The value is: " << *it << "." << endl;
	}
	delete verify;
	delete location;
	delete value;
	system("PAUSE");

	return 0;
}