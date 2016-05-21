
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
char* palindrom(char* A, int pStart, int pEnd) {
	if (strlen(A) == 1 || strlen(A) == 2 || pStart>=pEnd) 
		return "YES";
	if (A[pStart] != A[pEnd])
		return "NO";
	if (A[pStart] == A[pEnd])
		return palindrom(A, pStart + 1, pEnd - 1);
}





void main(int argc, char *argv[])
{
	char* stroka = new char;

	cout << "Vvedite stroku" << endl;
	fgets(stroka,1000, stdin);
	cout<< palindrom(stroka, 0, strlen(stroka) - 2)<< endl;
	system("PAUSE");
}