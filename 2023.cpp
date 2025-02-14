#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){  
bool res=true;     
int n,k,x=1;
cin>>n>>k;
int b[n];
for(int i=0;i<n;i++){
    cin>>b[i];
    x=x*b[i];
}
vector<int>rem;

for(int i=0;i<n;i++){
   if(b[i]==1||b[i]==7||b[i]==17||b[i]==119||b[i]==289||b[i]==2023){
    x=x/b[i];
    rem.push_back(b[i]);
   }
   else{
   res=false;
   break;
}
}
if(2023%x!=0){
    res=false;
}
if(res){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
}