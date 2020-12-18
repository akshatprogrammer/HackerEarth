#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m];
	int b[n*m];
	int index=0;
	int l=0,k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	while(k < n && l < m)
	{
		for(int i=l;i<m;i++)
		{
			b[index] = a[k][i];
			index++;
		}k++;
		for(int i=k;i<n;i++)
		{
			b[index] = a[i][m-1];
			index++;
		}m--;
		if(k<n)
		{
			for(int i=m-1;i>=l;i--)
			{
				b[index] = a[n-1][i];
				index++;
			}
		}	n--;
		if(l<m)
		{
			for(int i=n-1;i>=k;i--)
			{
				b[index] = a[i][l];
				index++;	
			}
			l++;
		}
	}
	for(int i=index-1;i>=0;i--)
	{
		cout << b[i] << " ";
	}
	return 0;
}
