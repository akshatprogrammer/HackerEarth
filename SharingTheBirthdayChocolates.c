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
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	//printf("Input number is %d.\n", num);       // Writing output to STDOUT
	int s[num];
	int i,j,count=0,m,d;
	for(i=0;i<num;i++)
	{
		scanf("%d",&s[i]);
	}
	scanf("%d %d",&d,&m);
	int sum;
	for(i=0;i<num;i++)
	{
		sum = 0;
		for(j=i;j<num;j++)
		{
			sum += s[j];

			if(sum == d && j+1-i == m)
			{
				count += 1;
				break;	
			}
		}
	}
	printf("%d\n",count);
}

