#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        if(i%2==0)
        printf("%d\n",i);

    }
    return 0;
}