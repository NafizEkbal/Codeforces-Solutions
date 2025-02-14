#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s,t;
cin>>s;
for(int i=0;i<s.length();i++){
if(s[i]>='0'&&s[i]<='9'){
t.push_back(s[i]);
}
}
sort(t.begin(),t.end());
for(int i=0;i<t.length();i++){
cout<<t[i];
if(i<t.length()-1)
cout<<"+";
}}