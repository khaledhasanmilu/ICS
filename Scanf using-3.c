#include<stdio.h>
int main() {
    float a,b;
    float sum,sub,mul,div;
   printf("Enter two Floating number:");
   scanf("%f%f",&a,&b);
   sum = a + b;
   printf("The sum:%.3f+%.3f=%.3f\n",a,b,sum);
   sub = a - b;
   printf("The Sub:%.3f-%.3f=%.3f\n",a,b,sub);
   mul = a * b;
   printf("The Mul:%.3f*%.3f=%.6f\n",a,b,mul);
   div = a / b;
   printf("The div:%.3f/%.3f=%.6f\n",a,b,div);

    return 0;
}

