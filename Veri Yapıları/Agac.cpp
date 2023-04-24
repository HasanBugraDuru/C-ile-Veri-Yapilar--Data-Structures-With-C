#include<stdio.h>
#include<stdlib.h>

typedef struct Dugum{
	int data;
	struct Dugum *Right;
	struct Dugum *Left;	
}Dugum;

 Dugum *Kok=NULL;
 
 Dugum* DugumUret(){
 	Dugum *YeniDugum;
 	YeniDugum =(Dugum*)malloc(sizeof(Dugum));
 	YeniDugum->Left=NULL;
 	YeniDugum->Right=NULL;
 	printf("please enter the value of data");
 	scanf("%d",YeniDugum->data);
 	return YeniDugum;
 }
 Dugum* DugumEkle(Dugum *Kok,Dugum *YeniDugum){
 	if (Kok != NULL){
 		if(Kok->data < YeniDugum->data){
 			Kok->Right =DugumEkle(Kok->Right,YeniDugum);
		 }
 		else{
 			Kok->Left=DugumEkle(Kok->Left,YeniDugum);
		 }
	}
	else{
		Kok=YeniDugum;
	}
	return Kok;
 }
 	int Boyut(Dugum *Kok){
 		if(Kok==NULL){
 			return 0;
		 }
		 else{
		 	return  Boyut(Kok->Right) + 1 + Boyut(Kok->Left);
		 }
	 }
 
Dugum* Dugumsil(Dugum *Kok,int veri){
	
}
 
 int main(){
 
 }
