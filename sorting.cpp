#include<iostream>
#include<sstream>
#include<string>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int print(bool flag)
{
	if(flag)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
int sorting(int a[],string s,bool flag,int n)
{
	int temp=-1;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			if(i>0 && s[i-1]=='1')
			{
				swap(a+temp+1,a+i+1);
			}
			temp = i; 
		}

	}
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		flag = true;
	}
	print(flag);
	return 0;
}
int main()
{
	int n;
	string s;
	bool flag = false;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	getchar();
	cin>>s;
	s += '0';

	sorting(a,s,flag,n);
	return 0;

}
