/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
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
