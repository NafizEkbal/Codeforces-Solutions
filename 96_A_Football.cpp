#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int count=1,cnt=1;
cin>>s;
for(int i=1;i<s.length();i++){
   if(s[i]==s[i-1]){
    count++;
    cnt=max(cnt,count);}
   else
   count=1;
}
if(cnt>=7)
 cout<<"YES";
else
 cout<<"NO";
}

