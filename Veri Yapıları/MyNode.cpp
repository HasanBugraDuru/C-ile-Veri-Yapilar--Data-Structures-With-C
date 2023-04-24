#include<stdio.h>
#include<stdlib.h>

 typedef struct Node{
 	int Data;
 	struct Node *Next;
 }Node;
 
 Node *Head=NULL;
 	
	 Node* BuildNode(){
	 	Node *NewNode;
	 	NewNode = (Node*)malloc(sizeof(Node)); 
	 	NewNode->Next = NULL;
		printf("Please enter the data");
		scanf("%d",&NewNode->Data);
		return NewNode;
	 } 
	void AddNode(){
		Node *NewNode;
		NewNode = BuildNode();
		if(Head==NULL){
			Head = NewNode;
		}
		else{
			NewNode->Next= Head;
			Head = NewNode;
		}
	} 
	void ListList(){
		Node *TempNode;
		int counter=0;
		TempNode= Head;
		if(Head == NULL)
		printf("liste mevcut degil");
		while(TempNode){
			printf("%d . Node's data is %d \n",++counter,TempNode->Data);
			TempNode= TempNode->Next;  
		}
	}
	int FindNode(){
		Node *FindNode;
		int findvalue=0,counter=0;
		FindNode =Head;
		printf("Enter the data that you want to find=");
		scanf("%d",&findvalue);
		while(FindNode){
			counter++;
			if(FindNode->Data==findvalue){
				printf("index of Node is %d Adres of node is %p \n",counter,FindNode);
				return 0;
			}
			FindNode=FindNode->Next;
		}
		printf("Node Not Found");
		return 0;
	}
	/*void RemoveNode(){
		Node *RemoveNode=NULL,*TempNode;
		int r_value=0;
		TempNode = Head;
		printf("Enter the data that you want to remove=");
		scanf("%d",&r_value);
		while(TempNode){
		if(RemoveNoData==r_value)
			
		}
		
		
	}*/
		
int main(void) {
	int secim,C_Data;
	Node *Find_Node;
	while(1){
		system("cls");
		printf("Islemler\n");
		printf("------------------------\n");
		printf("Listeye Dugum Ekleme----->1\n");
		printf("Listeleme---------------->2\n");
		printf("Dugum Bulma---------------->3\n");
		printf("------------------------\n");
		printf("Bir Islem Seciniz=");
		scanf("%d",&secim);
		switch(secim){
			case 1:	
				AddNode();
				break;
			case 2:	
				ListList();
				break;
			case 3:
				FindNode();	
				break;				
		}
		system("pause");
	}
}

