#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int f1(int x){
     int rez=x/10;
     int count=1;
     if(rez>0)
      return f1(rez)+1;
     else {
            return rez;}
     }
int main(int argc, char *argv[])
{
    cout<<f1(98546)<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
