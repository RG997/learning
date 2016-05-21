#include <iostream>
#include <stdio.h>

using namespace std;



int f1(int x, int y) {
	if (x <= y)
	{
		cout << x << " ";
		return f1(x + 1, y);
	}
	else
		return 0;
}

int f2(int x, int y) {
	if (x >= y)
	{
		cout << x <<" ";
		return f2(x - 1, y);
	}
	else
		return 0;
}


void main(int argc, char *argv[])
{
	int a;
	int b;
	cout << "Vvedite chislo A" << endl;
	cin >> a;
	cout << "Vvedite chislo B" << endl;
	cin >> b;

	if (a < b)
		f1(a,b);
	else
		f2(a,b);

	cout << endl;
	system("PAUSE");

}





