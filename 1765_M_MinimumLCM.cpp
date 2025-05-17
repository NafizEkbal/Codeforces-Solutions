#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        bool done=false;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            for(long long i=2;i<=sqrt(n);i++){
                if(n%i==0){
                 cout<<n/i<<" "<<n-n/i<<endl;
                 done=true;
                 break;
                }
            }
            if(!done){
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }

    return 0;
}