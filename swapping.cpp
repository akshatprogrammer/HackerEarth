#include<iostream>
#include<malloc.h>
using namespace std;
static int bubblesort(int a[],int n)
{
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		if(i+1 != a[i])
		{
			int t=i;
			while(a[t]!=i+1)
			{
				t++;
			}
			int temp = a[t];
			a[t] = a[i];
			a[i] = temp;
			c++;
		}
	}
	return c;

}
int main()
{
	int *a,n;
	cin >> n;
	a = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	cin >> a[i];
	cout << bubblesort(a,n);
	free(a); 
	return 0;
}
