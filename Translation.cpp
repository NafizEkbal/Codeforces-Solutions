#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0;  
string s,t;
cin>>s;
cin>>t;
for(int i=s.length()-1,j=0;i>=0,j<t.length();i--,j++){
  if(s[i]!=t[j]){
   count++ ;
   break;
  }
}
if(count>0)
 cout<<"NO";
else
 cout<<"YES";
}