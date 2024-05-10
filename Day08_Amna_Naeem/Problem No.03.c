/* A program that takes number of tries(T) user wants in the first line and for each try, it displays the location of 
first odd integer(if any) , otherwise displays 0 on new line among the list of numbers entered by a user
Sample Output:
Enter the number of tries: 2
Enter the number of values: 7
Enter 7 numbers: 10 2 3 4 5 0 -19

Enter the number of values: 5
Enter 5 Numbers: 2 4 6 8 10
Location of First odd integer: 0               */
#include<stdio.h>

int main()
{
	int T , no_ofvalues;
	int location = 0 ;
	
	printf("Enter the number of tries: ");
	scanf("%d",&T);
	
	for( int i=1; i<=T; i++)
	{
		printf("Enter the number of values: ");
		scanf("%d",&no_ofvalues);
		printf("Enter %d numbers: \n", no_ofvalues);
		int array[no_ofvalues];
		
		 for(int j = 0; j<no_ofvalues; j++)
		 {
		 	scanf("%d",&array[j]);
		 }
		 
		 for(int k=0; k<no_ofvalues; k++)
		 {
		 	 if(array[k] % 2 != 0)
		 	 {
		 	 	location = k+ 1 ;
		 	 	break ;
			  }
		 }
		 
		   printf("Location of first odd integer: %d\n", location);
		   location = 0 ;
	}
	
	      return 0 ;
}