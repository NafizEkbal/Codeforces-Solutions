#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,sum1=0,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
  sum=sum+a[i];
}

for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
    if(a[j]<a[j+1])
     swap(a[j],a[j+1]);  
  }
}  
for(int i=0;i<n;i++){
  sum1=sum1+a[i];
  count++;
  if(sum/2<sum1)
   break;
}
cout<<count<<endl;
}