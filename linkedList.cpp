#include<stdio.h>
#include <stdlib.h>



struct node {
	int data;
	struct node* next;
};
//function to insert a new node at the beginning of the LS
struct node* addAtTheBeggining(struct node* head,int newdata){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data =newdata;
	newnode->next=head;
	return newnode;
}
//function to add at the end
struct node* addAtTheEnd(struct node* head,int newdata){
	struct node* newnode =(struct node*)malloc(sizeof(struct node));
	newnode->data =newdata;
	newnode->next=NULL;
	
	if(head==NULL){
		return newnode;
	}
	struct node* current=head;
	while(current->next !=NULL){
		current=current->next;
	}
		current->next =newnode;
		return newnode;
}
//function to print the ls
void printLs(struct node* head){
	while(head!=NULL){
		printf("%d\n",head->data);
		head=head->next;
	}
	
}
int main (){
	struct node* head=NULL;
	head = addAtTheBeggining(head,13);
	head = addAtTheBeggining(head,132);
	head = addAtTheBeggining(head,143);
    head = addAtTheBeggining(head,1313);
	printLs(head);
	head =addAtTheEnd(head,22);
	printLs(head);
	
	
}
