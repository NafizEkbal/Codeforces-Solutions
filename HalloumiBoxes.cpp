
//Unsolved
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k,count=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
for(int i=0;i<n-1;i++){
    if(a[i+1]<a[i]){
        count++;
    }
}
if(count==0){
    cout<<"YES"<<endl;
}
else if(k==1){
    cout<<"NO"<<endl;
}


else{
    int ct=0;
    reverse(a,a+n);
    for(int i=0;i<n-1;i++){
    if(a[i+1]<a[i]){
        ct++;
    }
}
if(ct==0){
    cout<<"YES"<<endl;
}
else{
    int cnt=0;
    reverse(a,a+k);
    for(int i=0;i<n-1;i++){
    if(a[i+1]<a[i]){
        cnt++;
    }
}
if(cnt==0){
    cout<<"YES"<<endl;
}
else{
int cmt=0;
    reverse(a,a+n/2);
    reverse(a+n/2,a+n);
    for(int i=0;i<n-1;i++){
    if(a[i+1]<a[i]){
        cmt++;
    }
}
if(cmt==0){
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
    }
}
}
}}