/*Разработать программу для расчета отношения величины средней зарплаты сотрудников фирмы к максимальной зарплате.
Расчет средней зарплаты осуществляется для сотрудников, зарплата которых выше 100 дол.*/


#include <stdio.h>
#include <iostream>
using namespace std;

float average(float b[],float z){ //otoshenie sredniaia zarplata k maksimal'nou
	float average;
	float summ;
	summ=0;
	for (int i=0;i<2;i++){
		summ+=b[i];
	}
	return (average=summ/z);
}

float max_zp(float b[]){ //maximal'naia zarplata
	float max;
	int tm_mon;
	for (tm_mon=0;tm_mon<2;tm_mon++){
		if (b[tm_mon]>b[tm_mon-1] && tm_mon>=0){
				max=b[tm_mon];
				}
	}
	cout<<endl<<"Maximal'naia zarplata - "<<max<<endl;
	return max;
}

float main(){
	int tm_mon;
	float a[2];
	for (tm_mon=0;tm_mon<2;tm_mon++){
		cout<<"Vvedite zarplatu za "<<tm_mon+1<<" mesiac - ";
		cin>>a[tm_mon];
			if (a[tm_mon]<100){
			cerr<<endl<<"Zarplata sotrudinika men'she 100$. Raschet nevozmogen."<<endl<<endl;
			system("PAUSE");
			return 0;
			}
	}
	cout<<endl<<"Otnochenie sredneu zarplatu k maximal'nou - "<<average(a,max_zp(a))<<endl;
	cout<<endl;
	system("PAUSE");
}