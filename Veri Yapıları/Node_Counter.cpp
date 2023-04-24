#include<stdio.h>
#include<stdlib.h>

 typedef struct Node{
 	int Data;
 	struct Node* Next;
 
 }Node;
 
 Node *Head;
 
 Node* CreateNode(void){
 	Node *Newnode;
 	Newnode=(Node*)malloc(sizeof(Node));
 	Newnode->Next=NULL;
 	return Newnode;
 };
 
 void Createlist(void){
 	Node *Newnode;
 	Newnode = CreateNode();
 	Head=Newnode;
 };
 
 void AddHead(void){
 	Node *Newnode;
 	Newnode->Next=Head;
 	Head= Newnode;
 };
 
 int CountList(Node *TempHead){
 	
 	while(TempHead!=NULL){
 		
	 }
 
 };
 int main (){
 	int islem=0;
 	printf(" ***********Islemler********** \n------------------------------- \n Yeni bir liste Olustur = 1 \n------------------------------- \n Listeye Dugum Ekle = 2 \n------------------------------- \n Islemi Sonlandir = 9\n-------------------------------\n->");
	scanf("%d",islem);
	Node *TempHead;
	
		switch(islem){
		case 1:
			Createlist();
			break;
		case 2:	
			AddHead();
			break;
		case 9:
			printf("Islem Sonlandirildi.");
			islem=NULL;
			break;	
		default:
		printf("Gecersiz Karakter Girdiniz");	
		}

	
 	return 0;
 }

