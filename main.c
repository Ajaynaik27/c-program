/*find the number of days in amonth*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the month from 1 to 12:");
    scanf("%d",&n);
    if (n==1)
        {
            printf("jan=31\t");
        }
    else if(n==2)
     {
         printf("feb=28\t");
     }
    else if(n==3)
    {
        printf("march=31\t");
    }
    else if(n==4)
    {
        printf("april=30\t");
    }
    else if(n==5)
    {
        printf("may=31\t");
    }
    else if(n==6)
    {
        printf("June=30\t");
    }
    else if(n==7)
    {
        printf("july=31\t");
    }
    else if(n==8)
    {
        printf("August=31\t");
    }
    else if(n==9)
    {
        printf("September=30\t");
    }
    else if(n==10)
    {
        printf("October=31\t");
    }
    else if(n==11)
    {
        printf("November=30\t");
    }
    else if(n==12)
    {
        printf("December=31\t");
    }


    return 0;
}
