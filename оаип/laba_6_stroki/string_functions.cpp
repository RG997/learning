#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    char s1[]="privetik,kot,dom";
    char *s2;
    char *word;
    s2="privet";
int size;
size=strlen(s1);
cout<<"The string length is "<<size<<endl;


int compare_rezult;
compare_rezult=strcmp(s1,s2);
cout<<"The compare rezult is:"<<compare_rezult<<endl; 


cout <<"The printed string by the character is: " <<endl;
     for(int i=0;i<strlen(s1);i++)
     cout<<s1[i]<<endl;
     
     
word=strtok(s1,",");   
  if(word!=NULL)
  cout<<"The first word is: "<<word<<endl;  
     
    
     
     system("PAUSE");
    return EXIT_SUCCESS;
}
