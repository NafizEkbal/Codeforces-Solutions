#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
char ch;
int n;
cin>>ch>>n;
for(int i=1;i<9;i++){
    if(n!=i){
     cout<<ch<<i<<endl;}
}
for(char i='a';i<'i';i++){
    if(ch!=i){
     cout<<i<<n<<endl;}
}
}
}