// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct node{
  
  int data;
  node* next;
};

void insert(node*& head,int data)
{
    node* newNode=new  node;
    newNode->next=NULL;
    newNode->data=data;
    
    node* cur=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newNode;
}

void print(node* &head)
{
    node* cur=head;
    
    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    
}

node* rev(node*& head)
{
   node* dummy=NULL;
   node* cur=head;
   
   while(cur!=NULL)
   {
       node* ne=cur->next;
        
       cur->next=dummy;
       dummy=cur;
       cur=ne;
      
   }
   return dummy;
    
}

node* add(node*& h1,node*& h2)
{
    node* ans=NULL;
    
    int c=0;
    while(h1!=NULL&&h2!=NULL)
    {
        int sum=h1->data+h2->data+c;
        int rem=sum%10;
        c=sum/10;
        node *nn=new node;
        nn->data=rem;
        nn->next=ans;
        ans=nn;
        
        h1=h1->next;
        h2=h2->next;
    }
    while(h1!=NULL)
    {
        int s=h1->data+c;
        int rem=s%10;
        c=s/10;
        node *nn=new node;
        nn->data=rem;
        nn->next=ans;
        ans=nn;
        h1=h1->next;
        
    }
     
      while(h2!=NULL)
    {
        int s=h2->data+c;
        int rem=s%10;
        c=s/10;
        node *nn=new node;
        nn->data=rem;
        nn->next=ans;
        ans=nn;
        
        h2=h2->next;
        
    }
    if(c>0)
    {
        node *nn=new node;
        nn->data=c;
        nn->next=ans;
        ans=nn;
    }
    return ans;
    
}



int main() {
    // Write C++ code here
    node* head1=NULL;
    node* head2=NULL;
   cout<<"enter first ll size \n";
   int n;
   cin>>n;
   cout<<"enter ll"<<endl;
   while(n--)
   { 
        
     int x;
     cin>>x;
       insert(head1,x);
   }
   cout<<endl;
   //print(head1);
   cout<<endl;
   cout<<"enter second ll size \n";
   int n2;
   cin>>n2;
   cout<<"enter ll"<<endl;
   while(n2--)
   {
       int c;
       cin>>c;
       insert(head2,c);
   }
  // print(head2);
   cout<<endl;
 node* revL= rev(head1);
// print(revL);
 cout<<endl;
node* revL2=rev(head2);
//print(revL2);
cout<<endl;
node* ans=add(revL,revL2);
cout<<"added"<<endl;
print(ans);
   

    return 0;
}