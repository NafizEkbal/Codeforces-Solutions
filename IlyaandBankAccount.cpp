#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n>=0){
    cout<<n;
}
else{
    int x=n/10;
    int y=n%10;
    int z=x/10;
    int a=z*10+y;
    if(x>a){
        cout<<x;
        }
        else{
            cout<<a;
        }
}
}