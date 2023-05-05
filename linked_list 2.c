#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
	NODE *head = NULL;
		
void insert_at_head(NODE *nn){
	if(head == NULL){//there are no nodes
		head=nn;
		head -> next = head;
	}
		else{
			NODE *temp = head;
			while (temp -> next != head){
				temp =temp ->next;
			}
			temp ->next = nn;
			nn -> next = head;// connecting head and
			head=nn;
		}
	}
void insert_at_end(NODE *nn){
	if(head == NULL){
		head = nn;
		head -> next = nn;
		}
	else{
	NODE *temp = head;
		while (temp->next!=NULL){
		temp=temp->next;
}
		temp->next=nn;
		nn -> next = head;
	}
}
void delete_at_head() {
	if (head == NULL){
		printf("No Noodes\n");
	}
	else if(head -> next == head) {
	printf(" %d is deleted\n",head -> data);
	head = NULL; 
}
else{
	NODE *temp = head;
	while (temp -> next != head){
		temp = temp -> next;
	}
	temp -> next = head -> next;
	printf("%d is delected\n", head -> data);
	head = head -> next;
}
}
void delete_at_end(){
	if(head == NULL){ //list is empty
		printf("No Noodes\n");
	}
	else if (head -> next == NULL) { //list is containing single node 
	printf("Deleted element is %d: \n",head -> data);
	head = NULL;
	}
	else { // if list is containing more than 1 node
	NODE *temp =head;
	while (temp -> next -> next != NULL){
		temp = temp -> next;
	}
	printf("Deleted element is %d:\n", temp -> next -> data);
	NODE *dn = temp -> next;
	temp -> next = NULL;
	free(dn);
	}
}
	void display(){
		if (head= NULL) {
			printf("No Noodes\n");
			return;
		}
		NODE *temp = head;
		do{
			printf("%d ",temp->data);
			temp=temp->next;
		}while (temp !=head);	
		printf("\n");
	}
	int main(){ 
		int choie;
		while (1){
			printf("Enter\n1. Inesrt at head\n2. Inesrt at End\n3. Delete at head\n4. Delect at end\n5. Display and anything else to exit");
			scanf("%d", &choice);
			if(choice == 1){ 
				//insert_at_head()			  
			    NODE *nn= (NODE*)malloc(sizeof(NODE));
			    int val;
			    printf("Enter value to be inserted: ");
			    scanf("%d",&val);
			    nn->data=val;
			    nn->next=NULL;
			    insert_at_head(nn);
			}
			else if (choice == 2){
				//insert_at_end();
				int val;
				printf("Enter value to be inserted: ");
				scanf("%d",&val);
			    NODE *nn= (NODE *)malloc(sizeof(NODE));
			    nn->data=val;
			    nn->next=NULL;
			    insert_at_end(nn);
			}
			else if (choice==3){
				//delete_at_head()
				delete_at_head();
				
	    	}
		    else if (choice==4){
				//delete_at_end();
				delete_at_end();
				
	        }
	        else if (choice==5){
				// display()
				display();
			}
		     else{
		    	printf("Thank You");
		    	break;
			} 
		}
	}
	
// op:
	
