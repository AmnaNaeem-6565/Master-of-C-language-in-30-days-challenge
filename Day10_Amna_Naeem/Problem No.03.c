#include<stdio.h>

int add(int  , int );
int sub(int  , int );
int mul(int  , int );
int div(int  , int );

int main()
{
	int a , b , result ;
	char ch ;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("Enter the operator(*,+,/,-): ");
	scanf(" %c",&ch);
	
	switch(ch)
	
	{
		case '+':
			     result = add(a , b);
			      break;
		case '-':
			      result = sub(a , b);
			      break;
		case '*':
			     result = mul(a , b);
			      break;
		case  '/':
			     result = div(a , b);
			      break;
		default:
			     printf("Invalid character");
	}
	
        	printf("Result= %d\n",result);
        	return 0;
}

int add(int a , int b)
{

	 return (a + b) ;	
}

int sub(int a , int b)
{
	
	return (a - b);
}

int mul(int a , int b)
{

	return (a * b) ;
}

int div(int a , int b)
{
	
	return (a / b);
}