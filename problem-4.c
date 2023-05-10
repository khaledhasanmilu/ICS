#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;

    printf("Enter any three triangle:");

    scanf("%d %d %d",&num1,&num2,&num3);

    sum=num1 + num2 + num3;

    if(sum==180 && num1!=180 && num2!=180 && num3!=180){
        printf("yes");

    }
    else{
        printf("No");
    }

    return 0;
}
