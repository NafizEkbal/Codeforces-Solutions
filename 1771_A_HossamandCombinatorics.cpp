#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int big=a[0];
        int small=a[n-1];

        int nbig=count(a,a+n,big);
        int nsmall=count(a,a+n,small);

        if(small==big){
           cout<<1LL*n*(n-1)<<endl;
        }
        else{
            cout<<1LL*nsmall*nbig*2<<endl;
        }

    }
    return 0;
}