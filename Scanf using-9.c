#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a centimeter value:");
    scanf("%d%d",&a,&b);
    printf("%d meter %d centimer\n",a/100,a%100);
    printf("%d meter %d centimer\n",b/100,b%100);
    return 0;
}

