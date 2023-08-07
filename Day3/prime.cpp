// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool ans(int n)
{  
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    // Write C++ code here
    int n=0;
    cin>>n;
    
   if(ans(n))
   {
       cout<<"is prime";
   }
   else{
       cout<<"not a prime";
   }

    return 0;
}