// Program: Inverted Right-Angled Triangle Star Pattern
// Author: Hasnat
// Description: Prints a descending pattern of stars using nested for loop.

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= n-i+1; j++)
       {
        printf("*");
       }
       printf("\n");
       
    }
    return 0;
}
