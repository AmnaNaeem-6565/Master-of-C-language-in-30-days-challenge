#include <stdio.h>

// Function prototype

void reverse_fun(void);

int main()
{
	// Function calling
	
    reverse_fun();
    
    return 0;
}

// Function definition

void reverse_fun(void)
{
    int a;
    printf("Enter list size: ");
    scanf("%d", &a);
    
    int array[a]; 

    printf("Enter %d numbers: ", a);
    
    for (int i = 0; i < a; i++) 
	{
        scanf("%d", &array[i]); 
    }

    printf("Reverse array: ");
    
    for(int i = a - 1; i >= 0; i--)
	 
	{
        printf("%d ", array[i]); 
    }
    
}
