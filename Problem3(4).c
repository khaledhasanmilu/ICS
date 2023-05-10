#include<stdio.h>
int main() {
    int a=21,b=15,c=34,d=6;
    int e =a*b+(float)(a-c)/d+b;
    printf("%d*%d+(%d-%d)/%d+%d=%d",a,b,a,c,d,b,e);

    return 0;
}

