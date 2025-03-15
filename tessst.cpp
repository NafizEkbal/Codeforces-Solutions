#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
 
 
int main()
{
 
 
int t;
cin>>t;
 
while(t--)
{
 
    int n; 
    cin>>n;
 
    int ans=-1;
 
    int ct=0;
 
    for(int i=1;i<min(n,100000);i+=2)
    {
        int a=n;
        int b=i;
        int c=a^b;
 
        if(a+b>c && a+c>b && b+c>a)
        {
            ans=i;
           
           break;
        }
    }
 
    cout<<ans<<endl;
 
 
    
}
 
 
}