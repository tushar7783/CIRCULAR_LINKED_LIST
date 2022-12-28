 #include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
	
}*head;
void create(int a[],int n){
	struct node *t ,*last;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=a[0];
	head->next=head;
	last=head;
	for(int i=1;i<n;i++){
	
		t=(struct node *)malloc(sizeof(struct node));;
		t->data=a[i];
		t->next=last->next;
		last->next=t;
		last=t;
	}
}
void display(struct node *p){
	do{
		printf("%d\n ",p->data);
		p=p->next;
	}while(p!=head);
	
}
int main(){
		int n;
		printf("enter the no. of elements of array:");
	scanf(" %d",&n);

	int a[n];
	printf("elements of the array:");
	for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
	}
	create(a,n);
	printf("THE ELEMENTS OF LINKED LIST:\n");
	display(head);
  }
