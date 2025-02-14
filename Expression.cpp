#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,x=0;    
cin>>a>>b>>c;
int s=a+b+c;
int t=a*(b+c);
int u=(a+b)*c;
int v=a*b*c;
int w=a+b*c;
x=max({s,t,u,v,w});
cout<<x<<endl;
}