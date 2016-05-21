#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int ar[2][2];
    int i;
    int j;
    int g;
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
        
     cout<<endl<<"Vvedennui massiv v obratnom poraidke"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--)
           cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
    
    cout<<endl<<"Chetnue elementu massiva"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--){
               if (ar[i][j]%2==0)
               cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
               }
               
     cout<<endl<<"Elementu ravnue 2"<<endl;   
     for (i=1;i>=0;i--)
           for (j=1;j>=0;j--){
               if (ar[i][j]==2)
               cout<<"ar["<<i<<"]"<<"["<<j<<"]"<<"="<<ar[i][j]<<endl;
               }          
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
