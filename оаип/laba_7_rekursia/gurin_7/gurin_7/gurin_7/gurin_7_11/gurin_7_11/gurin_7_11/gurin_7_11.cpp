
#include <stdio.h>
#include <iostream>


using namespace std;

int qNum(int x) {
	if (x % 10 == 0 && x==0)
		return 0;
	else{
		int i = 1;
		i=qNum(x / 10) + 1;
		return i;
	}
		
}





void main(int argc, char *argv[])
{
	int a;
	cout << "Iput number" <<endl;
	cin >> a;
	cout << "Character quantity is - "<<qNum(a)<<endl;
	system("PAUSE");
}