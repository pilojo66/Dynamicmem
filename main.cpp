#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void makeArray(int, int**);
void fillArray(int, int*);
void printArray(int, int*);

int main() {
	srand(time(NULL));
	int a = 0;
	int *b = nullptr;
	cout << "How many items in the array?" << endl;
	cin >> a;
	makeArray(a, &b);
	fillArray(a, b);
	printArray(a, b);
	system("PAUSE");
	delete b;
}

void makeArray(int size, int **d) {
	*d = new int[size];
}

void fillArray(int size, int *d) {
	for (int i = 0; i < size; i++) {
		d[i] = rand() % 12315 + 1;
	}
}

void printArray(int size, int *d) {
	for (int i = 0; i < size; i++) {
		cout << "Element " << i + 1 << " is: " << d[i] << ".\n";
	}
}