#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the height of an object in inche:");
    scanf("%d%d",&a,&b);
    printf("%d feet %d inch\n",a/12,a%12);
    printf("%d feet %d inch\n",b/12,b%12);
    return 0;
}
