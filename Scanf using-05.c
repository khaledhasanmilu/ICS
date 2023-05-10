#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter any four floating values:");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    e = (a+b-c)*d-a/d;
    printf("(%.1f+%.1f-%.1f)*%.1f-%.1f/%.1f=%.6f\n",a,b,c,d,a,d,e);
    return 0;
}
