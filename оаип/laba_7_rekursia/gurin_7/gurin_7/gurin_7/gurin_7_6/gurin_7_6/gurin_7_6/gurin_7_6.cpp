
#include <stdio.h>
#include <iostream>


using namespace std;

int max(int* A,int mStart,int mEnd) {
	if (mStart == mEnd)
		return A[mStart];
	if (A[mStart] > A[mEnd]) {
		A[mStart] = A[mEnd];
		return max(A, mStart, mEnd - 1);
	}
	if (A[mStart] <= A[mEnd])
		return max(A, mStart, mEnd - 1); 
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
	cout <<"The lowest array elemnt - "<< max(mas, 0, size-1) << endl;
	system("PAUSE");
}