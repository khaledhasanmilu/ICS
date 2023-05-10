#include<stdio.h>
int main() {
    float a=2.3,b=5.8,c=1.1,d=3.5;
    float e =(a+b-c)*d-a/d;
    printf("(%.1f+%.1f-%.1f)*%.1f-%.1f/%.1f=%.6f",a,b,c,d,a,d,e);

    return 0;
}

