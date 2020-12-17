#include<iostream>
using namespace std;
int main()
{
	int num;
	scanf("%d", &num);              		
	int s[num];
	int i,j,count=0,m,d;
	for(i=0;i<num;i++)
	{
		cin >> s[i];
	}
	cin >> d >> m;
	int sum;
	for(i=0;i<num-1;i++)
	{
		sum = s[i] + s[i+1];
		if(sum == d)
			count++;	
	}
	cout << count;
}
