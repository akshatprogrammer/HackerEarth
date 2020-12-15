/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>
int main(){
	int num,i,count;
	scanf("%d", &num);              			// Reading input from STDIN
//	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	int arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;
	for(i=0;i<num;i++)
	{	count = 1;
		for(j=i+1;j<num;j++)
		{
			if(arr[i] == arr[j])
				count++;
			
			if(count >= num/2)
			{
				printf("%d",arr[i]);
				break;
			}
		}
	}
	//printf("%d",arr[i]);
	

}


