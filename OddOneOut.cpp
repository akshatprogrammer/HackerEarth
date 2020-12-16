#include <iostream>
#include <stdlib.h>
using namespace std;
void odd(int a[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res = res^a[i];
	}
	cout << res;
}
int main() {
	int num;
	cin >> num;										
	int *arr;
	arr =(int *)malloc(sizeof(int)*num);
	for(int i = 0;i<num;i++)
		cin >> arr[i];
	
	odd(arr,num);
	return 0;
}
