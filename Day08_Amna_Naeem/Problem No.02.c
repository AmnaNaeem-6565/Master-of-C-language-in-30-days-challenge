// A program that calculates the minimum and maximum number amoong the numbers provided by a user
#include <stdio.h>

int main() 
{
    int a ;
    int max_num, min_num, first_num;
    printf("Enter the number of values: ");
    scanf("%d", &a);
    printf("Enter %d numbers: ", a);
    scanf("%d", &max_num);
    min_num = max_num;
    for (int i = 1; i < a; i++) 
	{
        scanf("%d", &first_num);
        if (first_num > max_num) 
		{
            max_num = first_num;
        }
        if (first_num < min_num) 
		{
            min_num = first_num;
        }
    }
    printf("Maximum number: %d\n", max_num);
    printf("Minimum number: %d\n", min_num);

    return 0;
}
