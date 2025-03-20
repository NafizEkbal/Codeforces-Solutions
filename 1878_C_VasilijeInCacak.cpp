#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k,x;
        cin>>n>>k>>x;

        long long sumMin=k*(k+1)/2;
        long long sumMax=n;
        for(long long i=1;i<k;i++){
            n--;
            sumMax+=n;
        }

        if(sumMax>=x && sumMin<=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}