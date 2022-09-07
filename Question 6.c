/* Write a program to print the first N even natural numbers. */

#include<stdio.h>

int main()
{
    int i,n;

        printf("\n Enter a number->");
        scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                    printf("\n %d",i);
            }

    return 0;
}
