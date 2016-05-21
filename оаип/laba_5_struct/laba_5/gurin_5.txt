
/*Разработать программу учета покупок ювелирного магазина.
Данные о покупках хранить в виде массива структур.

Итоговая информация должна выводиться на экран в виде таблицы,
отсортированной по стоимости ювелирного украшения.*/

#include <iostream>
#include <string>


using namespace std;

struct Shop {
	int price;
	int quant;
	string artic;
};


void main() {
	
	Shop item;
	int n;
	cout << "Vvedite kolichestvo prodanuh izdeliu" << endl;
	cin >> n; //array size
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
	cout << endl << endl << "Tablica prodag" << endl<<endl;
	cout << "Itogovaia stoimost'\t" << "Kolichestvo edinic\t" << "Articul\t" << endl << endl;
	for (int i = 0; i <n-1; i++) {
		Shop d;
		for (int j = i + 1; j < n; j++) {
			if ((ar[i].quant*ar[i].price > ar[j].quant*ar[j].price)){
			d=ar[i];
			ar[i] = ar[j];
			ar[j] = d;
			}
		}
	}

	//Vivod
	for (int i = 0; i < n; i++) {
		cout << ar[i].quant*ar[i].price << "\t\t\t";
		cout << ar[i].quant << "\t\t\t";
		cout << ar[i].artic << "\t" << endl<<endl;
	}
	system("PAUSE");

}