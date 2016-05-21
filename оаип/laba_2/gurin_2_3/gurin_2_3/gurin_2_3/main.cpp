/* Вопрос: При создании функции выводящей матрицу в консоль (см. ниже код в комментариях), появляется ошибка идентификации a[i1][i1]. 
Каким образом в этом случае объявить массив a[i1][i1]?

#include <cstdlib>
#include <iostream>
#include <stdio.h>


int d;
int i1;
int a[i1][i1];
int i;
int j;
 
void output()
for (i=0;i<i1;i++){
		for (j=0;j<i1;j++){
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<" = "<<a[i][j]<<"   ";
		}
	cout<<""<<endl;		
	}

int main()
{
   
    
    cout<<"Vvedite razmer matricu"<<endl;
    cin>>i1;
       
    cout<<endl<<"Vvedite elementu matricu"<<endl;
    for (i=0;i<i1;i++){
        for (j=0;j<i1;j++){
        cin>>a[i][j];
        }
    }
    output();

		
	cout<<endl<<endl<<"Poluchennaia matrica"<<endl<<endl;	
    for (i=0;i<i1;i++){
        for (j=0;j<i1;j++){
        	if ((a[i][j]==a[j][i])&& i!=j){
        	a[j][i]=0;
           	a[i][j]=0;
        	}
        	
    	}
    }
    output();

    system("PAUSE");
    return EXIT_SUCCESS;
}


*/




#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
    int i;
    int j;
    int d;
    int i1;
    cout<<"Vvedite razmer matricu"<<endl;
    cin>>i1;
    int a[i1][i1];    
    cout<<endl<<"Vvedite elementu matricu"<<endl;
    for (i=0;i<i1;i++){
        for (j=0;j<i1;j++){
        cin>>a[i][j];
        }
    }
    cout<<endl<<endl<<"Vvedennaia matrica"<<endl<<endl;
    for (i=0;i<i1;i++){
		for (j=0;j<i1;j++){
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<" = "<<a[i][j]<<"   ";
		}
	cout<<""<<endl;		
	}

		
	cout<<endl<<endl<<"Poluchennaia matrica"<<endl<<endl;	
    for (i=0;i<i1;i++){
        for (j=0;j<i;j++){
        	if ((a[i][j]==a[j][i])&& i!=j){
        	a[j][i]=0;
           	a[i][j]=0;
        	}
        	
    	}
    }
    for (i=0;i<i1;i++){
		for (j=0;j<i1;j++){
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<" = "<<a[i][j]<<"   ";
		}
	cout<<""<<endl;		
	}

    system("PAUSE");
    return EXIT_SUCCESS;
}


