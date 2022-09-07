/* Write a program to print squares of the first N natural numbers. */

#include<stdio.h>

int main()
{
    int i,n,ans;

        printf("\n Enter a number->");
        scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                ans=i*i;
                printf("\n %d",ans);
            }

        return 0;
}

