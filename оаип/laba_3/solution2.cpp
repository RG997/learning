#include <cstdlib>
#include <iostream>

using namespace std;

int summa(int pervoe_slagaemoe,char oper,int vtoroe_slagaemoe)
{
int rezult;
rezult=pervoe_slagaemoe+ vtoroe_slagaemoe;
        if (rezult>=0)   
            return 1;
            else 
            return -99999;
            }

int main(int argc, char *argv[])
{
    int a=15;
    int z;
    
z=summa(a,'+',5);
if(z==1)
cout<<"Bolshe 0"<<endl;
if (z==-99999)cout<<"Bolshe 0"<<endl;
   system("PAUSE");
    return EXIT_SUCCESS;
}
