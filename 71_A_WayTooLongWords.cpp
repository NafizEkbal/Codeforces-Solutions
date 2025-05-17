#include<bits/stdc++.h>
using namespace std;\
int main()
{
int n;
cin>>n;
string a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
if(a[i].length()>10)
cout<<a[i].at(0)<<a[i].length()-2<<a[i].back()<<endl;
else
cout<<a[i]<<endl;
}
}
