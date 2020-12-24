#include<iostream>
using namespace std;
void reshuffleArray(int a[],int n)
{
    int x = n/2;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
       // cout << a[i] << " ";
    }
    for(int i=x;i<n;i++)
    {
        for(int j=x;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } 
      //  cout << a[i] << " ";
    } 
    for(int i=0;i<x;i++)
        cout << a[i] << " ";
    for(int i=x;i<n;i++)
        cout << a[i] << " ";
    
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    reshuffleArray(a,n);
    return 0;
}
