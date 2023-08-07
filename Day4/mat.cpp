#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter row"<<endl;
    cin>>n;
    cout<<"enter col"<<endl;
    cin>>m;
    cout<<"matrix is"<<endl;
    unordered_set<int> r;
    unordered_set<int> c;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==0)
            {
            r.insert(i);
            c.insert(j);
            }
        }
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        
            if(r.count(i)>0||c.count(j)>0)
            {
            mat[i][j]=0;
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    


    return 0;
}
