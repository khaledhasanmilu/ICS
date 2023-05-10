#include<stdio.h>

int main() {
    int mark;
    printf("Input your mark:");
    scanf("%d",&mark);
    if(mark>=90&& mark<=100)
    {
        printf("Grade:A");
    }
    else if(mark>=86 && mark<=89){
        printf("Grade:A-");
    }
    else if(mark>=82 && mark<=85){
        printf("Grade:B+");
    }
    else if(mark>=78 && mark<=81){
        printf("Grade:B");
    }
    else if(mark>=74 && mark<=77){
        printf("Grade:B-");
    }
    else if(mark>=70 && mark<=73){
        printf("Grade:C+");
    }
    else if(mark>=66 && mark<=69){
        printf("Grade:C");
    }
    else if(mark>=62 && mark<=65){
        printf("Grade:C-");
    }
    else if(mark>=58 && mark<=61){
        printf("Grade:D+");
    }
    else if(mark>=55 && mark<=57){
        printf("Grade:D");
    }
    else
    {
        printf("Grade:F");
    }

    return 0;
}
