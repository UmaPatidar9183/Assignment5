#include<stdio.h>
int main()
{
    int x,y,i;
    printf("enter the no.");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
       y = x * i;

        printf("%d * %d = %d\n",x,i,y);
    }
    return 0;
}
