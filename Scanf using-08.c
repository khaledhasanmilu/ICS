#include<stdio.h>
int main()
{
    int s,u,t,a;
    printf("Enter any Three values:");
    scanf("%d %d %d",&u,&a,&t);
    s = u*t+.5*a*t*t;
    printf("The displacement of a moving body S is:=%d",s);
    return 0;
}

