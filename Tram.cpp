#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n;
int mx=0;
int sum=0;
for(int i=0;i<n;i++){
  cin>>a>>b;
  sum=sum-a+b;
  mx=max(mx,sum);
}
cout<<mx;
}