#include<stdio.h>
int main()
{
    int a[20],i,n,key,f=0;
    printf("\n Enter how many value:");
    scanf("%d",&n);

    printf("\n Enter nums:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n Enter key to search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("key found at position %d",i+1);
    }
    else
    {
        printf("Key not found");
    }
    return 0;
    
}