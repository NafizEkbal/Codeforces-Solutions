#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0;    
string p;
cin>>p;
for(int i=0;i<p.length();i++){
  if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
    count++;
  }
}
if(count==0)
 cout<<"NO";
else
cout<<"YES";
}