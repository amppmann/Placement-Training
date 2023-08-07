// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    // Write C++ code here

    
    int n1;
    int n2;
    cout<<"enter num 1 size";
    cin>>n1;
    cout<<"enter num 2 size";
    cin>>n2;
    
    int arr1[n1];
    int arr2[n2];
    cout<<"enter num 1";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter num 2";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    
    vector<int> ans;
    
    int i=n1-1;
    int j=n2-1;
    int c=0;
    while(i>=0 &&j>=0)
    { 
        int sum=arr1[i]+arr2[j]+c;
        int rem=sum%10;
        c=sum/10;
        ans.push_back(rem);
        i--;
        j--;
    }
    while(i>=0)
    {
        int s=(arr1[i]+c)%10;
        c=s/10;
        ans.push_back(s);
        i--;
    }
       while(j>=0)
    {
        int s=(arr2[j]+c)%10;
        c=s/10;
        ans.push_back(s);
        j--;
    }
  
    if(c>0)
    {
        ans.push_back(c);
    }
for(int i=ans.size()-1;i>=0;i--)
{
    cout<<ans[i]<<" ";
}


    

    return 0;
}