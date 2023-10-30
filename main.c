
#include <stdio.h>

int main()
{
    int n=4;
    int r=n;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=r;j++)
        {
            for(int k=1;k<=i*2-1;k++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
        r--;
    }
}

/*
1
1
1
1
222
222
222
33333
33333
4444444
*/
