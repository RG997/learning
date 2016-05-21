#include <iostream>
using namespace std;

int calc(int p1, int p2, char p3) {
	switch (p3) {
	case '+':return (p1 + p2); break;
	case '-':return (p1 - p2); break;
	case '*':return (p1 * p2); break;
	case '/':return (p1 / p2); break;
	default: cout << "Nedopustimaia operaciai" << endl;
	}
}

int main() {
	int a;
	int b;
	char c;
	int *x;
	int *y;
	char *z;
	x = &a;
	y = &b;
	z = &c;

	cout << "Vvedite a" << endl;
	cin >> *x;
	cout << "Vvedite b" << endl;
	cin >> *y;
	cout << "Vvedite operaciu c" << endl;
	cin >> *z;
	cout << "Rezul'tat = "<<calc(*x,*y,*z)<<endl;
	system("PAUSE");

}