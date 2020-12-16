#include <iostream>
#include <stdlib.h>
using namespace std;
int peakOfArray(int arr[],int num)
{
	for(int i=1;i<num;i++)
	{
		if(arr[i]>=arr[i-1] && arr[i] >= arr[i+1])
			return 1;
		else
			return 0;
	}
	
}
int main() {
	int num;
	cin >> num;
	int *arr;
	arr = (int *)malloc(sizeof(int)*num);
	for(int i=0;i<num;i++)
		cin >> arr[i];

	cout << peakOfArray(arr,num);
	

}
