#include <stdio.h>
using namespace std;

struct Node {
	int sum;
	char name[10];
	Node *left;
	Node *right;
};


void add(int sum, char name[10], Node*&tree) {
	if (tree == NULL) {
		tree = new Node;
		tree->sum = sum;
		tree->name[10] = name[10];
		tree->left = NULL;
		tree->right = NULL;
	}

}


void main(){
	Node *kor = NULL;
	int i=10;
	char name[10];
	int sum;
	while (1) {
		printf("Input:\n1 - create \n2 - advance \n3 - delete \n0 - exit \n\n");
		scanf_s("%i", i);

		switch (i) {
		case 1:
			printf("input sum\n");
			scanf("%d", &sum);
			printf("input name\n");
			scanf("%d", &sum);
			add(sum, name, kor);
			break;
		case 2:
			//show(kor);
			break;
		case 3:scanf("%d", &i);
			break;
		case 0:

			scanf("%d", &i);
			break;

		}




	}

}