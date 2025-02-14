#include<bits/stdc++.h>
using namespace std;
int main(){
int n,res=0;
cin>>n;
string s[n];
string ans;
map<string,int>m;
for(int i=0;i<n;i++){
    cin>>s[i];
    m[s[i]]++;
}
for(int i=0;i<n;i++){
    if(res<m[s[i]]){
        res=m[s[i]];
        ans=s[i];
    }
}
    cout<<ans;
}