#include<stdio.h>

#define MAXSIZE 5
int a[MAXSIZE];
int top=-1;
int isEmpty(){
	if(top==-1){
		printf("\nStack is empty\n");
		return 1;
	}else
	{
	printf("\nstack is not empty\n");
	
	return 0;
}
}
int size(){
	if(top==-1)
	{
		printf("\nStack is empty\n");
	}else{
	
	printf("\nSize value is %d",top);
	return top;
}
}
void display(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d\n",a[i]);
	}
}
void push(int k){
	if(top==MAXSIZE-1){
		printf("\nStack Overflow\n");
	}else{
		top++;
		a[top]=k;
	}
}
void pop(){
	int l=isEmpty();
	if(l==-1){
		printf("\nStack is already empty\n");
	}else{
		printf("Pop value is %d",a[top]);
		top--;
	}
}

int main(){
	int choice, value;
	while(1){
	printf("\n********************************************************************************************************\n");
	printf("1. Push\n2. Pop\n3. display\n4. size\n5. isEmpty\n6. exit\n");
	printf("Enter the Your Choice\n");
	printf("\n********************************************************************************************************\n");
	scanf("%d",&choice);
	
	
	switch(choice){
		case 1: 
		printf("\nENter the value\n");
		scanf("%d",&value);
		push(value);
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		case 4: size();
		break;
		case 5: isEmpty();
		break;
		case 6: return 0;
		default : printf("\nEnter valid choice\n");
		return 0;
	}
}	
	getch();
	return 0;
}
