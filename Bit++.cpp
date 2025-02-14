#include<bits/stdc++.h>
using namespace std;
int main(){
int n,z=0;
cin>>n;    
string a[n];
for(int i=0;i<n;i++){
cin>>a[i];            
if(a[i]=="++X"||a[i]=="X++")
z++;
else
z--;
}
cout<<z;
}
