#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,count=0,x;
cin>>n;
while(n)
{
x=n%10;
if(x==4||x==7)
count++;
n=n/10;
}
if(count==4||count==7)
cout<<"YES";
else
cout<<"NO";
}