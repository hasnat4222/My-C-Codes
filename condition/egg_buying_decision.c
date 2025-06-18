// Program: Egg Buying Decision Based on Price
// Author: Hasnat
/* Description: Uses if-else to decide how many eggs 
to buy based on price.*/

#include<stdio.h>
int main()
{
    int price = 60;
    if(price <= 50)
    {
        printf("Buy 4 eggs\n");
    }
    else
    {
        printf("Buy 2 eggs");
    }
    return 0;
}
