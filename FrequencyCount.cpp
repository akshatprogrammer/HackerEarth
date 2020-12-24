#include<iostream>
#include<string>
using namespace std;
int MAX = 26;
void freqcount(string s,int n)
{
	int freq[MAX] = {0};
	for(int i=0;i<n;i++)
	{
		freq[s[i]-'a']++;
	}
	for(int i=0;i<MAX;i++)
	{
		if(freq[i]==0)
		continue;
		else
		cout << (char)(i+'a') << " " << freq[i] << endl;
	}
}
int main()
{
	string s;
	cin >> s;
	getchar();
	int n = s.length();
	freqcount(s,n);
	return 0;
}
