#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l;    
double d=0;
cin>>n>>l;
double a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=1;i<n;i++){
    d=max(d,(a[i]-a[i-1])/2);
}
d=max(d,(double)a[0]);
d=max(d,(double)(l-a[n-1]));
cout<<fixed<<setprecision(10)<<d;
}