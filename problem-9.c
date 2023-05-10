#include<stdio.h>

int main() {
   char a;
   printf("Enter any value:");
   scanf("%c",&a);
   if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {
    printf("This is alphabet");
   }
    else if(a>='0'&&a<='9')
   {
    printf("This is a digit" );
   }
   else
   {
    printf("This is speacial");
   }

    return 0;
}

