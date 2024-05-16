/* A program to print the second maximum element in an array enterd by a user
Sample Run:
Enter array size: 5
Enter 5 elements: 1 2 3 9 2
Second maximum element: 3                     */

int main()

#include<stdio.h>

{
	int size , first_max , second_max ;
	
	printf("Enter array size: ");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter %d elements: ", size);
	
	for(int i=0; i<size; i++)
	
	{
		scanf("%d ", array[i]);
	}
	
	  first_max = array[0], second_max = array[0];
    
    for(i = 1; i < size; i++)
    
	{
        if(array[i] > first_max) 
        
		{
            second_max = max1;
            first_max = array[i];
        }
        
        else if(array[i] > second_max && array[i] != first_max) 
        
		{
            second_max = arr[i];
        }
        
    }
    
    printf("Second maximum element: %d\n", max2);
    
    return 0;
}
	
}