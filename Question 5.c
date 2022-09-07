/* Write a program to print the first N odd natural numbers in reverse order. */

#include<stdio.h>

int main()
{
    int i,n;

        printf("Enter a number->");
        scanf("%d",&n);

            for(i=n;i>=1;i--)
            {
                if(i%2==1)
                    printf("\n %d",i);
            }

    return 0;
}
