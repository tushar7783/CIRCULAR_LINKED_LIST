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

void insert(int pos,int x){
	struct node *p,*t;
	int i;
	if(pos==0){
	
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		if(head==NULL){
			head=t;
			head->next=head;
		}
		else{
		p=head;
		while(p!=head){
			p=p->next;
			}
			t->next=head;
			p->next=t;
			head=t;
		}
		
	}
	else{
		p=head;
		for(int i=0;i<pos-1;i++){
			p=p->next;
		}
		t=(struct node *)malloc(sizeof(struct node));
		t->data=x;
		t->next=p->next;
		p->next=t;
	}
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
	printf("\nTHE LINKED LIST WITH NEW NODE AT 0TH POSITION\n");
	insert(0,2);
	display(head);
	printf("\nTHE LINKED LIST WITH NEW NODE AT ANY POSITION");
	insert(4,77);
	display(head);
	
	
	
}
