#include <stdio.h>
int main() {
    int a;
    int sum = 0;
    float average;
    printf("Enter the number of values: ");
    scanf("%d", &a);
    int numbers[a];
    printf("Enter %d numbers: ", a);
    for (int i = 0; i < a; i++) 
	{
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = (float)sum / a;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
