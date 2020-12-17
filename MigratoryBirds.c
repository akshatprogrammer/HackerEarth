#include<stdio.h>
int max_freq(int a[],int n)
{
	int max = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max = a[i];
	}
	return max;
}
int main()
{
	int num,i;
	scanf("%d", &num);
	int arr[num];
	int count[6]={0,0,0,0,0,0};
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
		count[arr[i]]++;
	}
	printf("%d",max_freq(arr,6));
}
