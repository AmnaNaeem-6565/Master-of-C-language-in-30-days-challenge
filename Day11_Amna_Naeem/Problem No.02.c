/* A program that takes input 2 x 2 matrix from user and diplays its determinant
Sample Run:

Enter a 2 x 2 matrix elements:

2    4
1    3

Determinant: 2                     */

#include<stdio.h>

int main()

{
	// Declaration of a 2-D for rows and column
	
	int det , matrix[2][2] ;
	
	printf("Enter 2 x 2 matrix elements: \n");
	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	det = (matrix[0][0] * matrix[1][1])   -  (matrix[0][1]*matrix[1][0]);
	
	printf("Determinant: %d", det);
	
	return 0;
}