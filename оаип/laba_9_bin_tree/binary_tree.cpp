#include<stdio.h>
#include<locale.h>

struct Node
{
	int dan;
	Node* left;
	Node *right;
};
void add(int dan, Node*&tree)
{
	if(tree==NULL)
	{
        tree=new Node;
		tree->dan=dan;
		tree->left=NULL;
		tree->right=NULL;
	}
	else
	{
		if(dan<tree->dan)
		{
			if(tree->left==NULL)
			{
				tree->left=new Node;
				tree->left->dan=dan;
				tree->left->left=NULL;
				tree->left->right=NULL;
			}
			else
			{
				add(dan, tree->left);
			}
		}
		if(dan>tree->dan)
		{
			if(tree->right==NULL)
			{
				tree->right=new Node;
				tree->right->dan=dan;
				tree->right->left=NULL;
				tree->right->right=NULL;
			}
			else
			{
				add(dan, tree->right);
			}
	}
}
}
void show(Node*&tree)
{
	if(tree!=NULL)
	{
		show(tree->left);
		printf("%d", tree->dan);
		show(tree->right);
	}
}
int main()
{
	setlocale(LC_ALL,"RUSSIAN");
	Node* kor=NULL;
	int i=100;
	int dan;
	char familia[20];
	while(1)
	{
		printf("Введите:\n1 - для создания\n2 - для измения\n3 - для удаления\n0 - для выыхода\n");
			scanf("%d",& i);
			switch(i){
				case 1:
					printf("Введите данные\n");
					scanf("%d",& dan);
					add(dan, kor);
					break;
				case 2:
					show(kor);
					break;
				case 3:scanf("%d",& i);
					break;
				case 0:

					scanf("%d",& i);
					break;
			
			}

	}	
}
