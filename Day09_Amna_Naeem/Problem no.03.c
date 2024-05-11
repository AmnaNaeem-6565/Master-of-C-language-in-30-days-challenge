/* A program to search for a particular element(N) in the list of numbers entered by user and displays the location of first element(N) in the list of numbers
otherwise it displays -1 and number of times that element(N) occurs in the list (if any), otherwise it displays 0.
Sample run:
Enter the element you want to search in the list: 4
Enter the list length: 10
Enter 10 numbers: 1 2 3 3 5 6 9 4 4 4
Location of first 4 in the list: 8
Number of 4 in the list: 3             */
#include<stdio.h>

int main()
{
int	searching_no , no_length;

printf("Enter the element you want to search in the list: ");
scanf("%d",&searching_no);

printf("Enter the list length: ");
scanf("%d",&no_length);

printf("Enter %d Numbers: ",no_length);
int array[no_length];

 for (int i = 0; i < no_length; i++)
 
  {
        scanf("%d", &array[i]);
    }
    
    int first_num = -1;
    int count = 0;
    
    for (int i = 0; i < no_length; i++) 
	{
        if (array[i] == searching_no) 
		{
            if (first_num == -1) {
                first_num = i + 1;
            }
            count++;
        }
    }
    
    if (first_num != -1) {
        printf("Location of first %d in the list: %d\n", searching_no, first_num);
        printf("Number of %d in the list: %d\n", searching_no, count);
    } 
    
	else 
	{
        printf("-1\n");
    }
    
    return 0;
}

