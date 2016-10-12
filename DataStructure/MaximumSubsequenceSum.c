#include<stdio.h>
void maxlist(int a[],int k)
{
	int i,temp=0,ThisSum=0,MaxSum=0;
	int first=a[0],first1=a[0],last=a[k-1];
	for(i=0;i<k;i++){
		ThisSum+=a[i];
		if(ThisSum>MaxSum&&ThisSum>0){
			MaxSum=ThisSum;
			last=a[i];
			first=first1;
		}
		else if(ThisSum==0&&MaxSum==0&&a[i]==0){
            temp=1;
		}
		else if(ThisSum<0){
		   ThisSum=0;
		   if(a[i+1]>0){
		   	first1=a[i+1];
		   }
		}

	}
	if(temp==1){
        printf("0 0 0");
	}
	else{
        printf("%d %d %d",MaxSum,first,last);
	}
}
int main()
{
	int i,k,a[100000];
	scanf("%d",&k);
	for(i=0;i<k;i++){
        scanf("%d",&a[i]);
	}
	maxlist(a,k);
	return 0;
}
