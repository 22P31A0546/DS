#include<stdio.h>
int stack[100],top=-1,size;
void push(int ele){
	if (top==size-1){
		printf("Stack is full. Insertions are not possible\n");
	}
	else{
		top++;
		stack[top]=ele;
		printf("%c is inserted into stack\n",ele);
	}
}
int pop(){
	if (top==-1){
		return -1;
	}
	else{
		int rm=stack[top];
		top--;
		return rm;
	}
}
void peek(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Element at top is: %c\n",stack[top]);
	}
}
void display(){
	if (top==-1){
		printf("Stack is empty.No elements to display\n");
	}
	else{
		printf("Elements in the stack are\n");
		int i;
		for (i=top;i>=0;i--){
			printf("%c ",stack[i]);
		}
		printf("\n");
	}
}
int main(){
	printf("Enter size of the stack: ");
	scanf("%d",&size);
	//memu driven program
	char choice;
	while (1){
	printf("Enter 1. push 2. pop 3. peek 4. Display and any other to exit: ");
	scanf("%c",&choice);
     	if(choice==1){
	    	//push() operation
	    	int ele;
	    	printf("Enter an elementto pushed into the stack: ");
	    	scanf("%c",&ele);
	    	push(ele);
	    }
	    else if (choice==2){
		    //pop() operation
		    int removed_element=pop();
		    if (removed_element==-1){
		    	printf("stack is empty.Cannot delete the element\n");
			}
			else{
				printf("Removed element is: %c\n",removed_element);
			}
	    }
	    else if (choice==3){
    		//peek() operation
	    }
	    else if (choice==4){
		    //display()
	    }
	    else{
		printf("Thank you");
		break;
 	    }
    }
}
