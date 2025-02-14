#include<bits/stdc++.h>
using namespace std;
int main(){
int n,count=0;
string s;
cin>>n;
if(n%4==0||n%7==0||n%44==0||n%47==0||n%74==0||n%77==0||n%474==0||n%444==0||n%447==0||n%477==0||n%774==0||n%744==0||n%747==0||n%777==0){
 cout<<"YES";
 return 0;
}
else{
 s=to_string(n);
 for(int i=0;i<s.length();i++){
   if(s[i]=='4'||s[i]=='7'){
    count++;}
   else
    break;
}}
if(count==s.length())
 cout<<"YES";
else
 cout<<"NO";

}