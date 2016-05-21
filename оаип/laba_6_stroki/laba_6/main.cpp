#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
	float a=0;
	float c=0;
	char *word;
	char stroka[1024];
	cout<<"Vvedite stroku, razdeliv slova zapiatou ,"<<endl;
	cin>>stroka;
	
	
	
	word=strtok(stroka,",");
	while (word!=NULL)
	{
	c++;	
	int b=(strlen(word))/2;
		for (int i=0;i<b;i++)
		{
			int j=(strlen(word)-1)-i;
			if (word[i]==word[j])
			{
				if (i==b-1)
				a++;
			}
			else break;
		}
	word=strtok(NULL,",");
	}
	cout<<"Kolichestvo slov polindromov: "<<a<<endl;
	cout<<"Procent slov polindromov: "<<a/c*100<<" %"<<endl;
	
	
	system("PAUSE");
	return 0;
}
