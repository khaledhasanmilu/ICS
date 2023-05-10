#include<stdio.h>

int main() {
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num<0){
        printf("negative input is not valid");
    }
    else if ((num!=0)&&(num&(num-1)==0)){
        printf("No");
    }
    else {
        printf("Zero is invalid");
    }

    return 0;
}
