
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
