
#include <stdio.h>
#include <iostream>


using namespace std;

int sort(int* A,int sStart_1, int sStart_2, int sEnd) {
	int d;
	if ( sEnd < sStart_1)
		return 0;
	if (A[sStart_1] <= A[sStart_2] && sStart_2 <= sEnd)
		return sort(A, sStart_1, sStart_2 + 1, sEnd);
	if (A[sStart_1] > A[sStart_2] && sStart_2<=sEnd) {
		d=A[sStart_1];
		A[sStart_1] = A[sStart_2];
		A[sStart_2] = d;
		return sort(A, sStart_1, sStart_2+1, sEnd);
	}
	else return sort(A, sStart_1+1, sStart_1 + 2, sEnd);
	
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
	
	sort(mas, 0, 1, size - 1);
	
	cout << "The ordered array is ";
		for (int i = 0; i < size; i++) {
			cout <<" "<< mas[i];
	}
	cout << endl;
	system("PAUSE");
}