#include <iostream>
#include <stdio.h>

using namespace std;

int f1(int x) {
	
	if (x == 0) {
		
		return 0;

	}
	else
		return x % 10 + f1(x / 10);

}




void main(int argc, char *argv[])
{
	

	int a;
	cout << "Vvedite chislo A" << endl;
	cin >> a;
	cout << "Summa cifr " << f1(a) << endl;

	system("PAUSE");

}





