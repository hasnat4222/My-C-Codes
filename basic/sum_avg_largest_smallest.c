// Program: Sum, Average, Largest and Smallest of Three Numbers
// Author: Hasnat
/* Description: Takes three integers, calculates their sum, 
 average, largest and smallest. */

#include<stdio.h>
int main()
{
   int a, b, c;
   int sum, largest, smallest;
   float average;
   
   scanf("%d%d%d",&a,&b,&c); 
    sum = a+b+c;
    average = sum/3.0;

    // Find largest
    if ( a > b && a > c)
    {
        largest = a;
    }
    else if (b>c && b>a)
    {
        largest = b;
    }
    else{
        largest = c;
    }

    // Find smallest
     if ( a < b && a < c)
    {
        smallest = a;
    }
    else if (b<c && b<a)
    {
        smallest = b;
    }
    else{
       smallest = c;
    }

        printf("Sum = %d\n",sum);
        printf("Average = %.2f\n",average);
        printf("largest of the three = %d\n",largest);
        printf("Smallest of the three = %d\n",smallest);
    
    return 0;
}
