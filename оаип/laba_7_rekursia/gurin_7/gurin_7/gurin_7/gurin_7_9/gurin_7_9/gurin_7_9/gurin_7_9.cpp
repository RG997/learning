
#include <stdio.h>
#include <iostream>


using namespace std;

int mult(int* A, int mStart, int mEnd) {
	if (mStart != mEnd) {
		A[mStart] *= A[mEnd];
		return mult(A, mStart, mEnd - 1);
	}
	else return A[mStart];
}





void main(int argc, char *argv[])
{
	int size;
	cout << "Input array's size N ";
	cin >> size;
	int b;

	int* mas = new int[size];

	cout << "Input elements " << endl;
	for (int i = 0; i < size; i++) {
		cin >> b;
		mas[i] = b;
	}
	cout << "The multiplication array elemnts = " << mult(mas, 0, size - 1) << endl;
	system("PAUSE");
}