#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void f1(int x){
     int rez=x/10;
     if(rez>0)
     f1(rez);
     
     
     cout<<"srabotal vyzov"<<endl;
     cout<<rez<<endl;
     
     }

int main(int argc, char *argv[])
{
    f1(98546);
    
     system("PAUSE");
    return EXIT_SUCCESS;
}
