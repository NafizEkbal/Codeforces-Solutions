#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n,m,count=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int x=(-1)*a[i];
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int z=v.size();
    int sum=0;
    if(m>z){
        for(int i=0;i<z;i++){
            sum=sum+v[i];
        }
    }
    else{
    for(int i=0;i<m;i++){
        sum=sum+v[i];
       }
    }

    cout<<sum;

    return 0;
}