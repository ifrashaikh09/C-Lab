#include<stdio.h>
int main()
{
    int i,n,rno=0,r,sum=0,no;
    printf("\n enter any number:");
    scanf("%d",&n);
    no=n;

    while(n>0)
    {
        r=n%10;
        rno=rno*10+r;
        n=n/10;
    }
     printf("\nreverse num:%d",rno);
     if(no==rno)
      printf("\n Pallindrom");
     else
      printf("\n Not a pallindrom");

      return 0;
}