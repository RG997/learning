#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;


int gFind(char* A, int gStart, int gEnd) {
	if (gStart > gEnd)
		return 0;
	if (A[gStart] > '0' && A[gStart] < '9') {
		return gFind(A, gStart + 1, gEnd) + 1;
	}
	if (A[gStart] < '0' || A[gStart] > '9')
		return gFind(A, gStart + 1, gEnd);
	
}



void main(int argc, char* argv[]) {
	int n,i;


	/* input and save in my_file.txt string
	
	cout << "Input string" << endl;
	char* str_file = new char;
	fgets(str_file, 1000, stdin);
	FILE* fp;
	errno_t A;
	A = fopen_s(&fp, "my_file.txt", "w");
	if (fp != 0) {
		cout << "Writing..."<<endl;
		for (i = 0; i < strlen(str_file); i++) {
			putc(str_file[i], fp);
		}
		fclose(fp);
	}
	else {
		cout << "Couldn't write...";
		fclose(fp);
	}*/


	char str_read[100];
	FILE* fr;
	errno_t B;
	B = fopen_s(&fr, "my_file.txt", "r");
	fgets(str_read,100,fr);
	cout<<"Number of digits "<<gFind(str_read, 0, strlen(str_read)-2)<<endl;
	system("PAUSE");
}