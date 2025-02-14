#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;    
string s[n];
map<string,int>m;
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    if(m[s[i]]>0){
        cout<<s[i]<<m[s[i]]<<endl;
    }
    else{
        cout<<"OK"<<endl;
    }
    m[s[i]]++;
}
}