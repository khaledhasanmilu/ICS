#include<Stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd" );
    }
    return 0;
}

