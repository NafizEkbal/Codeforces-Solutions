#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int x=(n/m)+(n%m!=0);
        if(n-x>k){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}