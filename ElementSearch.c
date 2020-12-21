#include<stdio.h>
//using namespace std;
int element(int b[],int n,int x)
{
	int l=0,r=n-1;
	for(int i=0;i<(n)/2;i++)
	{
		if(b[l]==x)
		return 1;
		else
		l++;
		if(b[r]==x)
		return 1;
		else
		r--;
		if(l==r && b[l] != x)
		return -1;
	}
}
int main()
{
	int n,m,x;
	scanf("%d%d",&m,&n);
	scanf("%d",&x);
	int a[m][n];
	int b[m*n];
	int index=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[index] = a[i][j];
			index++;
		}
	}
	//cout << element(b,m*n,x);
	printf("%d ",element(b,m*n,x));	
	return 0;
}
