#include<stdio.h>
int main()
{
int i,n,Cube;
printf("enter the number");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    Cube=i*i*i;
 printf("square of %d is %d\n",i,Cube);
        
    }
    return 0;
}