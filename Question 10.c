/* Write a program to print a table of N. */

#include<stdio.h>

int main()
{
    int i,n,ans;

        printf("\n Enter a Number->");
        scanf("%d",&n);

            for(i=1;i<=10;i++)
            {
                ans=n*i;

                    printf("\n %d * %d = %d",n,i,ans);
            }

    return 0;
}
