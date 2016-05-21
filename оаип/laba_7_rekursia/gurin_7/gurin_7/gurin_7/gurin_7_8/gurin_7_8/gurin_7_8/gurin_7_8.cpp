
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int dl(char* A,int l) {
	int i = 1;
	if (l != 0)
		i = dl(A, l - 1) + 1;
		return i;
}






void main(int argc, char *argv[])
{
	char* stroka = new char;
	cout << "Vvedite stroku" << endl;
	fgets(stroka, 1000, stdin);
	cout << dl(stroka, strlen(stroka)-2)<<endl;
	system("PAUSE");
}