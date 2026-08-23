#include<stdio.h>
int main()
{
    int n,i,j,f=1;
    printf("\n Enter any num:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }

        if(f==1)
        printf("\n Prime");
        else
        printf("\n Not prime");
    

    return 0;

}