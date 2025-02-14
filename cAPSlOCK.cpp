#include<bits/stdc++.h>
using namespace std;
int main(){
string s; 
int count=0,lami=0,fiz=0;
cin>>s;
if(s[0]>='a'&&s[0]<='z'){
        fiz++;
    }
for(int i=1;i<s.length();i++){
    if(s[i]>='A'&&s[i]<='Z'){
       lami++;
    }
    else
    count++;
}
if(fiz==0&&count==0){
    s[0]=tolower(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
}
else if(fiz==1&&count==0){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
}
cout<<s;
return 0;
}