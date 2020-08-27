#include<stdio.h>
void main()
{
    int n1,n2;
    printf("enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("before swap:%d,%d\n",n1,n2);
    n1=n1-n2;
    n2=n1+n2;
    n1=n2-n1;
    printf("after swap: %d,%d",n1,n2);
}
