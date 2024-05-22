/* A program to print first n terms of fibonacci sequence where n is a positive integer entered by a user
Sample run:
Number of terms: 5
First five terms of fibonacci sequence: 0 1 1 2 3 */

#include<stdio.h>

int main()
{
	int a ;
	
	printf("Enter number of terms: ");
	scanf("%d", &a);
	
	int fib[a];
	
 	fib[0] = 0;
	fib[1] = 1;
	
	printf("First %d terms of fibonacci sequence: %d %d ", a , fib[0] , fib[1]);
	
	for(int i=2; i<a; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		printf("%d ", fib[i]);
	
	}
	
	return 0;
	
}
