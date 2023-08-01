#include<stdio.h>
/*write a program for multiplication table for given number*/
int main()
{
    int n,i;
    printf("enter the multiplication table of the number:\n");
    scanf("%d",&n);
    for (i=1;i<=10;i++);
    {
        printf("%d
               *%d=%d\n",n,i,n*i);
    }
    return 0;
}
