#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n enter any three numbers :");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a==b && b==c)
     printf("\n all the three numbers are equal");
     else if(a>b && a>c)
        printf("\n %d is largest among all three",a);
       else if(b>c)
            printf("\n %d is largest among all three",b);
        else
          printf("\n %d is largest among all three",c);

   return 0;

}