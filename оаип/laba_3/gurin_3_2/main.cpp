#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

 int ar[2][2];
    int i;
    int j;
    int g;

void obr(){

cout<<endl<<"Vvedennui massiv v obratnom poraidke"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--)
           cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
}
void chetn(){
cout<<endl<<"Chetnue elementu massiva"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--){
               if (ar[i][j]%2==0)
               cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
               }
}
void ravn_2(){
	cout<<endl<<"Elementu ravnue 2"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--){
               if (ar[i][j]==2)
               cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
               }   
}
void obr_while(){
	cout<<endl<<endl<<"While v obratnom poriadke"<<endl;
	i=1;
	while (i>=0){
		j=1;
		while (j>=0){
		cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
		j--;	
		}
	i--;	
	}
}


int main()
{
   
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
        cout<<"Vvedite a["<<i<<"]"<<"["<<j<<"]"<<endl;
        cin>>ar[i][j];
        }    
    }
   cout<<endl<<"Vvedennui massiv"<<endl;
   for (i=0;i<2;i++){
        for (j=0;j<2;j++)
        cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
        }
    obr(); 
    chetn();
    ravn_2(); 
    obr_while();           
    system("PAUSE");
    return EXIT_SUCCESS;
}
