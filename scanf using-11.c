#include <stdio.h>
int main()
{
	int time, h, m, s;
	printf("Enter a time interval in seconds : ");
	scanf("%d", &time);
    h= (time/3600);
    time=time-h*3600;
    m = (time/60);
    s = (time-m*60);
	printf("%d hour %d minute %d second\n",h,m,s);

	return 0;
}

