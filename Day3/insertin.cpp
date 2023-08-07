
#include <bits/stdc++.h>
using namespace std;
  
// Driver Code
int main()
{

int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    //int temp=a[i];
    for(int j=i;j>0;j--)
    {
        if(a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
        }
        else{
            break;
        }
    }
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}