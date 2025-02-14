#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];  
  if(a[i]==1){
   count++;
   break;}
}
if(count==1)
 cout<<"HARD";
else
 cout<<"EASY";
}