#include<stdio.h>
#include<stdlib.h>

typedef struct strnode2{
	int Data;
	struct strnode2 Next
};

Node2 *Head;

Node2* CreateNode2(int C_Data){
	Node2 *NewNode;
	NewNode =(Node2)malloc(sizeof(Node2));
	NewNode->Next=NULL;
	NewNode->Prev=Null;
	NewNode->Data=C_Data;
}
