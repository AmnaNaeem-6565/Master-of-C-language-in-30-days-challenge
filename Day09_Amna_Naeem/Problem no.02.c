/* A program to sort the elements by user in descending order
sample run:
Enter the number of values: 7
Enter 7 numbers: 10 2 3 4 5 0 -19
sorted numbers in descending order: 10 5 4 3 2 0 -19     */
#include <stdio.h>

int main()
 {
    int no_ofvalues, temp;

    printf("Enter the number of values: ");
    scanf("%d", &no_ofvalues);

    printf("Enter %d numbers: ", no_ofvalues);
    int array[no_ofvalues];

    for (int i = 0; i < no_ofvalues; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < no_ofvalues; i++) 
    
    {
    	 for(int j=i + 1; j<no_ofvalues; j++)
    	 {
    	 	  if(array[i] < array[j])
    	 	  {
    	 	  	 temp = array[i];
    	 	  	 array[i] = array[j];
    	 	  	 array[j] = temp;
			   }
		 }
	}
	
	printf("Sorted numbers in descending order: ");
	        for(int i=0; i<no_ofvalues; i++)
	        {
	        	printf( "%d ", array[i]);
			}
    return 0;
}