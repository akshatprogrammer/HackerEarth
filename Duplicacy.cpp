#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;	
	*b = temp;
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
}
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
	printArray(a,n);
}
void duplicacy(int a[],int n)
{
	int out[10],k=0;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(i==j)
		{
			out[k] = a[i];
			k++;
		}
	}
	cout << k << endl;
	sort(out,k);
}
int main()
{
	int n;
	cin >> n;
	int input[n];
	for(int i=0;i<n;i++)
	cin >> input[i];
	duplicacy(input,n);
	return 0;
}
