#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m],transpose[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
			transpose[j][i]=a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << transpose[i][j] << " ";
		}cout << endl;
	}
}
