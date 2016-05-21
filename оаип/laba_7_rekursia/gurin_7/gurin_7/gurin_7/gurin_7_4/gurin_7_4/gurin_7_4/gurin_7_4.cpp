#include <stdio.h>
#include <iostream>

using namespace std;
int f1(int x) {
	
	if (x % 10 == 0) {
		return 0;
	}
	else {
		f1(x / 10);
		cout << x%10 << endl;
		return x%10;
		
	}

}


void main(int argc, char *argv[])
{
	int a;
	cout << "Vvedite chislo:  ";
	cin >> a;
	f1(a);


	system("pause");
}