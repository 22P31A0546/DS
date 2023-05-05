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
	}
		else{
			nn->next=head;
			head=nn;
		}
	}
	void display(){
		if(head==NULL){
			printf("No Nodes\n");
			return;
		}
		NODE *temp=head;
		while (temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	int main(){
		while(1){
			int choice;
			printf("Enter\n1. Inesrt at head\n2. Inesrt at End\n3. Delete at head\n4. Delect at end\n5. Display and anything else to exit");
			scanf("%d",&choice);
			if(choice==1){
				//insert_at_head()
			    int val;
			    printf("Enter value to be inserted:" );
			    scanf("%d",&val);
			    NODE *nn= (NODE*)malloc(sizeof(NODE));
			    nn->data=val;
			    nn->next=NULL;
			    insert_at_head(nn);
			}
			else if (choice==2){
				//insert_at_end();
				
			}
			else if (choice==3){
				//delete_at_head()
				
	    	}
		    else if (choice==4){
				//delect_at_end();
				
	        }
	        else if (choice==5){
				//display()
				display();
		    }
		    else
		    {
		    	printf("Thank You");
		    	break;
			}
		}
	}
