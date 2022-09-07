/* Write a program to print cubes of the first N natural numbers. */

#include<stdio.h>

int main()
{
    int i,n,ans;

        printf("\n Enter a Number->");
        scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                ans=i*i*i;
                printf("\n %d",ans);
            }

    return 0;
}
