#include <stdio.h>
#include <stdlib.h>
	typedef struct Node{
		
		int Data; 
		struct Node* Next ;
	};
	struct Node* CreateNode(void){
	 struct Node *p;
	 p=(struct Node*)malloc(sizeof(struct Node));
	 printf("Lufen data giriniz:");
	 scanf("%d",&p->Data);
	 return p;	
	};
	
	
	int main (){
		struct Node *Comenode;
		int islem;
		printf(" ***********Islemler********** \n------------------------------- \n Yeni bir liste Olustur = 1 \n------------------------------- \n Listeye Dugum Ekle = 2 \n------------------------------- \n->");
		scanf("%d",islem);
	//	switch ()
		Comenode=CreateNode();
		printf("gelen deger %d",Comenode->Data);
		return 0;
		
	}
