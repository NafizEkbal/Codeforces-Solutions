#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
t="hello";
int count=0,j=0;
for(int i=0;i<s.length();i++){
   if(s[i]==t[j]){
    count++;
    j++;}
}
if(count==5)
cout<<"YES";
else
cout<<"NO";
}