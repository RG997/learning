#include <iostream>
#include <string>


using namespace std;

struct Shop {
	int price;
	int quant;
	string artic;
};




void sort_1(Shop ar[], int n){
	Shop d;
	for (int i = 0; i < n - 1; i++) {
		cout << endl << endl << "Tablica prodag" << endl << endl;
		cout << "Itogovaia stoimost'\t" << "Kolichestvo edinic\t" << "Naimenovanie\t" << endl << endl;
		for (int j = i + 1; j < n; j++) {
			if ((ar[i].quant*ar[i].price < ar[j].quant*ar[j].price)) {
				d = ar[i];
				ar[i] = ar[j];
				ar[j] = d;
			}
		}
		
	}
	//Vivod
	for (int i = 0; i < n; i++) {
		cout << ar[i].quant*ar[i].price << "\t\t\t";
		cout << ar[i].quant << "\t\t\t";
		cout << ar[i].artic << "\t" << endl << endl;
	}
}


void sort_2(Shop ar[], int n) {
	Shop d;
	for (int i = 0; i < n - 1; i++) {
		cout << endl << endl << "Tablica prodag" << endl << endl;
		cout << "Kolichestvo edinic\t" << "Itogovaia stoimost'\t" << "Naimenovanie\t" << endl << endl;
		for (int j = i + 1; j < n; j++) {
			if ((ar[i].quant < ar[j].quant)) {
				d = ar[i];
				ar[i] = ar[j];
				ar[j] = d;
			}
		}
	}
	//Vivod
	for (int i = 0; i < n; i++) {
		cout << ar[i].quant << "\t\t\t";
		cout << ar[i].quant*ar[i].price << "\t\t\t";
		cout << ar[i].artic << "\t" << endl << endl;
	}
}

void sort_3(Shop ar[], int n) {
	string s;
	for (int i = 0; i < n - 1; i++) {
		cout << endl << endl << "Tablica prodag" << endl << endl;
		cout << "Naimenovanie\t" << "Itogovaia stoimost'\t" << "Kolichestvo edinic\t" << endl << endl;
		for (int j = i + 1; j < n; j++) {
			if ((ar[i].artic > ar[j].artic)) {
				s = ar[i].artic;
				ar[i].artic = ar[j].artic;
				ar[j].artic = s;
			}
		}
	}
	//Vivod
	for (int i = 0; i < n; i++) {
		cout << ar[i].artic << "\t\t\t";
		cout << ar[i].quant*ar[i].price << "\t\t\t";
		cout << ar[i].quant << "\t" << endl << endl;
	}
}


void main() {
	int b;
	int n=0;
	
	Shop item;
	cout << "Vvedite kolichestvo prodanuh izdeliu" << endl;
	cin >> n;
	Shop *ar = new Shop[n];
	

	//Vvod
	for (int i = 0; i < n; i++) {
		cout << "Vvedite naimenovanie " << i + 1 << " izdelia" << endl;
		cin >> ar[i].artic;
		cout << "Vvedite stoimost' " << i + 1 << " izdelia" << endl;
		cin >> ar[i].price;
		cout << "Vvedite kolichestvo " << i + 1 << " izdelia" << endl;
		cin >> ar[i].quant;

	}

	// Sortirovka
	cout << endl << endl << "Vvedite parametr sortirovki" << endl << endl;
	cout << "1 - Stoimost'" << endl;
	cout << "2 - Kolichestvo'" << endl;
	cout << "3 - Naimenovanie" << endl;
	cin >> b;
	
	switch (b) {
		case 1:
			sort_1(ar, n);
			break;
		case 2:
			sort_2(ar, n);
			break;
		case 3:
			sort_3(ar, n);
			break;
	}
	



	
	system("PAUSE");

}