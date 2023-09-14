#include<stdio.h>
#include<math.h>	
	int addNum();
	int subNum();
	int mltNum();
	int divNum();
	int sqrNum();
	int sqrtNum();
	int main(){
		int choice;
		char retry;
		printf("WHOLE Numbers Calculator\n");
		do{
			printf("Select an operation:\n");
			printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exponent \t \t 6 Square Root \n \n");      
			do{
				printf("Please, Make a choice from 1 - 6: ");
				scanf("%d", &choice);
		  	}while(choice < 1 || choice > 6);
		
		switch(choice)
		{
			case 1:
					addNum();
					break;
			case 2:
					subNum();
					break;
			case 3:
					mltNum();
					break;
			case 4:
					divNum();
					break;
			case 5:
					sqrNum();
					break;
			case 6:
					sqrtNum();
					break;
			
		}
			printf("\nDo you want to perform another calculation? (Y/N)\n");
			scanf(" %c", &retry);
			printf("\n\n");
			
			}while(retry == 'Y' || retry == 'y');
		return 0;
	}
	
	int addNum(){
		int num1, num2, sum;
		printf("You Chose Addition\n");
		printf("Enter the First Number: ");
		scanf("%d", &num1);
		printf("Enter the Second Number: ");
		scanf("%d", &num2);
		sum = num1 + num2;
		printf("%d + %d = %d\n", num1, num2, sum);
	}
	int subNum(){
		int num1, num2, diff;
		printf("You Chose Subtraction\n");
		printf("Enter the First Number: ");
		scanf("%d", &num1);
		printf("Enter the Second Number: ");
		scanf("%d", &num2);
		diff = num1 - num2;
		printf("%d - %d = %d\n", num1, num2, diff);
	}
	int mltNum(){
		int num1, num2, prod;
		printf("You Chose Multiplication\n");
		printf("Enter the First Number: ");
		scanf("%d", &num1);
		printf("Enter the Second Number: ");
		scanf("%d", &num2);
		prod = num1 * num2;
		printf("%d x %d = %d\n", num1, num2, prod);
	}
	int divNum(){
		int num1, num2, quo;
		printf("You Chose Division\n");
		printf("Enter the First Number: ");
		scanf("%d", &num1);
		printf("Enter the Second Number: ");
		scanf("%d", &num2);
		if(num1 == 0 || num2 == 0){
			printf("UNDEFINED");
		}else
		{
			quo = num1 / num2;
			printf("%d / %d = %d\n", num1, num2, quo);	
		}
		
	}
	int sqrNum(){
		int num1, num2, expo;
		printf("You Chose Exponent\n");
		printf("Enter the Base: ");
		scanf("%d", &num1);
		printf("Enter the Exponent: ");
		scanf("%d", &num2);
		expo = pow(num1,num2);
		printf("%d ^ %d = %d\n", num1, num2, expo);
	}
	int sqrtNum(){
		double num1, Sqrt;
		printf("You Chose Square Root\n");
		printf("Enter the Number: ");
		scanf("%lf", &num1);
		Sqrt = sqrt(num1);
		printf("The Square root of %.2lf is %.2lf", num1, Sqrt);
	}
