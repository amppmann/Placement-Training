#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout<<"enter n"<<endl;
    cin>> n;
    cout<<"enter target";
    int t;
    cin>>t;
    int arr[n];
    cout<<"enter"<<endl;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        um[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        int rem=t-arr[i];
        if(um.find(rem!=um.end()))
        {
            cout<<arr[i]<<" "<<rem<<endl;
            arr[um[rem]]=-1000;
        }
    }

    
    


    return 0;
}
