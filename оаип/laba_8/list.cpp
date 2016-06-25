#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Node{
       int value;
       Node *next;
       };
       Node *nachalo;
void addNode(int v){
     Node *temp=new Node;
     temp->value=v;
     if(nachalo==NULL){
       nachalo=temp;                
temp->next=NULL;     
                       }
     else{
         temp->next=nachalo;
         nachalo=temp; 
          }
     }
     void show(){
          Node *uk;
          uk=nachalo;
          while(uk->next!=NULL)
          {
          cout<<uk->value<<endl;
          uk=uk->next;                     
                          }
          cout<<uk->value<<endl;
          }
int main(int argc, char *argv[])
{nachalo=NULL;
addNode(5);
addNode(15);
addNode(53);  
show();  
    
    
    
     system("PAUSE");
    return EXIT_SUCCESS;
}
