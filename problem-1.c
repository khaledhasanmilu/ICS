#include<Stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    if(num >= 0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative" );
    }
    return 0;
}
