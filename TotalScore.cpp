#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	cout << sum;

}
