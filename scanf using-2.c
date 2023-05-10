#include<stdio.h>
int main() {
    int a,b;
    int sum,sub,mul,mod;
    float div;
   printf("Enter two Intiger number:");
   scanf("%d%d",&a,&b);
   sum = a + b;
   printf("The sum:%d+%d=%d\n",a,b,sum);
   sub = a - b;
   printf("The Sub:%d-%d=%d\n",a,b,sub);
   mul = a * b;
   printf("The Mul:%d*%d=%d\n",a,b,mul);
   div = a / b;
   printf("The div:%d/%d=%.1f\n",a,b,div);
   mod = a % b;
   printf("The mod:%d %% %d=%d\n",a,b,mod);



    return 0;
}
