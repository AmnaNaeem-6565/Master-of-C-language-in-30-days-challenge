/* A program that prints the table of binary , octal , and hexadecimal equivalent of decimal numbers in the range (1 - 255)
Sample Run:
Decimal      Binary          Octal       Hexadecimal
1           00000001         1            1
2           00000010         2            2
...         ........         ...          ...
255         11111111        377            FF                     
	
  */
#include <stdio.h>

int main() 

{
    printf("Decimal\t\tBinary\t\tOctal\t\tHexadecimal\n");
    
    for (int i = 1; i <= 255; i++) 
	{
		
        printf("%d\t\t", i);

         // Decimal to binary
         
        for (int j = 7; j >= 0; j--)         // initializing j with 7 because conversion in binary starts from the most significiant bit
        
		{
            printf("%d", (i >> j) & 1);
        }
        
        printf("\t\t");

        // Decimal to octal
        
        printf("%o\t\t", i);

        // Decimal to Hexadecimal
        
        printf("%X\n", i);
    }
    
    return 0;
    
}
