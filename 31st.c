#include<stdio.h>
void main()
{    
    int a[100], max, size, i, l= 1;
    
    printf("Enter the number of elements in array\n");
    scanf("%d", &size);
    
    printf("Enter %d integers\n", size);
    
    for (i= 0; i < size; i++)
scanf("%d", &a[i]);
    
    max = a[0];
    
    for (i = 1; i < size; i++)
    {
        if (a[i] > max)
        {
        max  = a[i];
        l = i+1;
        }
    }
     printf("Max element is present at location %d and it's value is %d.\n", l, max);
    return 0;    
}
