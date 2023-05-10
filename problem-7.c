#include<stdio.h>

int main() {
    int num1,num2;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        printf("Num1 is greater than num2");
    }
    else if(num1<num2){
        printf("num1 is less than num2");
    }
    else {
        printf("num1 is equal num2");
    }

    return 0;
}
