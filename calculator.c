#include<stdio.h>



int main()
{
	double input1,input2;
	char opre;
	printf("Enter the to calculate\n");
	scanf("%lf%*c",&input1);
	do{
		scanf("%c",&opre);
		switch(opre){
			case '+':scanf("%lf",&input2);
			printf("=%lf",input1+input2);
			input1=input1+input2;
			break;
			
			case '-':scanf("%lf",&input2);
			printf("=%lf",input1-input2);
			input1=input1-input2;
			break;
			case '*':scanf("%lf",&input2);
			printf("=%lf",input1*input2);
			input1=input1*input2;
			break;
		    case '/':scanf("%lf",&input2);
		    if(input2<input1)
		    {	
		    printf("=%lf",input1/input2);
		    input1=input1/input2;
		}else{printf("not define");
		}
		
			
			
			
		}
	}while(1);
	
	getch();
	
}
