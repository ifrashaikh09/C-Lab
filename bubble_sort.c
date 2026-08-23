#include<stdio.h>
int main()
{
    int a[20],i,n,j,t;

    printf("\n Enter how many values:");
    scanf("%d",&n);

    printf("\n Enter nums:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Unsorted numbers:\n");
    
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n Sorted numbers:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    return 0;

}