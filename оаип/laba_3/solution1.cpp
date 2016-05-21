#include <cstdlib>
#include <iostream>

using namespace std;

int summa(int pervoe_slagaemoe,char oper,int vtoroe_slagaemoe)
{
int rezult;
rezult=pervoe_slagaemoe+ vtoroe_slagaemoe;
       return rezult;
            }

int main(int argc, char *argv[])
{
    int a=15;
    int z;
    
z=summa(25,'+',5);

cout<<z<<endl;

   system("PAUSE");
    return EXIT_SUCCESS;
}
