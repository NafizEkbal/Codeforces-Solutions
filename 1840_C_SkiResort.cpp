#include <bits/stdc++.h>
using namespace std;

long long c_sub(long long n,long long k){
    if(n<k){
        return 0;
    }
    else{
        return (n-k+1)*(n-k+2)/2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        long long  pass=0;
        long long  res=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]<=q){
                pass++;
            }
            else{
                res=res+c_sub(pass,k);
                pass=0;
            }
        }
        res=res+c_sub(pass,k);
        cout<<res<<endl;    
    }
    return 0;
}