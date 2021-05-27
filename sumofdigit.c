#include<stdio.h>
int sumofdigit();
int main()
{
	int n;
	printf("enter the value of n: ");
	scanf("%d", &n);
	printf("sum of digit of %d is %d",n,sumofdigit(n));
}

int sumofdigit(int n)
{
	if(n==0)
	return 0;
	else
	return(n%10+ sumofdigit(n/10));
}
