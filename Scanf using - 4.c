#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("Please enter four integer number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e = a*b+(float)(a-c)/d+b;
    printf("The Value is:%d*%d+(%d-%d)/%d+%d=%d\n",a,b,a,c,d,b,e);
    return 0;
}
