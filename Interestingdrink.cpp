#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
long long int q;
cin>>q;
int b[q];
for(int i=0;i<q;i++){
    cin>>b[i];
}
for(int i=0;i<q;i++){
    int count=upper_bound(a,a+n,b[i])-a;
    cout<<count<<endl;
}

}