#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int cap=0,sm=0;
cin>>s;
for(int i=0;i<s.length();i++){
  if(s[i]>='A'&&s[i]<='Z') 
   cap++;
  else
   sm++;
}
if(cap>sm){
 for(int i=0;i<s.length();i++)
    s[i]=toupper(s[i]);
}
else{
for(int i=0;i<s.length();i++)
   s[i]=tolower(s[i]);
}
cout<<s;
return 0;
}