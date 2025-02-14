#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
cin>>n;
int a[n];
map<int,int>m;
for(int i=0;i<n;i++){
  cin>>a[i];
  m[a[i]]++;
}
sort(a,a+n);
reverse(a,a+n);
for(int i=0;i<n;i++){
     if(a[i]==2&&m[a[i]]==1){
      count++;
      m[a[i]]--;
       if(m[1]>0){
       m[1]--;
       m[1]--;
      }
    }
      else if(a[i]==1&&m[a[i]]>0){
      count=count+(m[a[i]]/4);
      if(m[a[i]]%4){
        count++;
     }
     break;}
     else if(m[a[i]]>0){
        count++;
        m[a[i]]--;
        if(m[4-a[i]]>0){
        m[4-a[i]]--;
    }
}}
cout<<count;
}