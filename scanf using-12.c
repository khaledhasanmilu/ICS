#include <stdio.h>
int main() {
	int amt, total;
	printf("Input the amount: ");
	scanf("%d",&amt);
	total = (int)amt/500;
	printf("There are: ");
	printf("\n%d Note(s) of 500\n", total);
	amt = amt-(total*500);
	total = (int)amt/100;
	printf("%d Note(s) of 100\n", total);
    amt = amt-(total*100);
	total = (int)amt/50;
	printf("%d Note(s) of 50\n", total);
	amt = amt-(total*50);
	total = (int)amt/10;
	printf("%d Note(s) of 10\n", total);
	amt = amt-(total*10);
	total = (int)amt/5;
	printf("%d Note(s) of 5\n", total);
	amt = amt-(total*5);
	total = (int)amt/1;
	printf("%d Note(s) of 1\n", total);

	return 0;
}
