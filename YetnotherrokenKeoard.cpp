#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
for(int i=0;i<s.length();){
  if(s[i]=='B'){
    for(int j=i-1;j>=0;j--){
        if(s[j]>'A'&&s[j]<'Z'){
            s.erase(s.begin()+j);
            s.erase(s.begin()+i-1);
            i--;
            break;
        }
    }
 }
 else
 i++;
}
for(int i=0;i<s.length();){  
  if(s[i]=='b'){
    for(int j=i-1;j>=0;j--){
        if(s[j]>'a'&&s[j]<'z'){
            s.erase(s.begin()+j);
            s.erase(s.begin()+i-1);
            i--;
            break;
        }
    }
  }
  else
  i++;
}
cout<<s<<endl;
}
}