#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n/2;i++)
	{
		for(int j=i;j<n-1-i;j++)
		{
			int temp = a[i][j];
			a[i][j]=a[j][n-i-1];
			a[j][n-i-1]=a[n-i-1][n-j-1];
			a[n-i-1][n-j-1]=a[n-j-1][i];
			a[n-j-1][i]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << a[i][j] << " ";
		}cout<<endl;
	}
}
