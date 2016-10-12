#include<stdio.h>
int maxlist(int a[],int k)
{
	int i,ThisSum=0,MaxSum=0;
	for(i=0;i<k;i++)
	{
		ThisSum+=a[i];
		if(ThisSum>MaxSum)
		MaxSum=ThisSum;
		else if(ThisSum<0)
		ThisSum=0;
	}
	return MaxSum;
}
int main()
{
	int i,k,a[100000];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	printf("%d",maxlist(a,k));
	return 0;
}
