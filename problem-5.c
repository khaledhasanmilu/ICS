#include<stdio.h>

int main() {
    int num;

    printf("Enter an integer : ");
    scanf("%d", &num);

    if(num>0){
        if((num!=0)&&(num&(num-1))==0){
            printf("yes");
        }
        else{
            printf("No");
        }

    }

    return 0;
}
