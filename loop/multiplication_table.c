// Program: Multiplication Table Generator
// Author: Hasnat
// Description: Takes an integer input and prints its multiplication table using for loop.
 
#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);

    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
    
}
