#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s;
for(int i=0;i<s.length();){
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
        i=i+3;
        if (!t.empty() && t.back() != ' ') {
                t.push_back(' ');
            }
    }
    else{
      t.push_back(s[i]); 
      i++; 
    }
}
for(int i=0;i<t.length();i++){
    cout<<t[i];
}
}