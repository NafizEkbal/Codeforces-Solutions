#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        if(n==k){
            cout<<1<<endl;
            continue;
        }
        long long x=k-1;

        if(n%2==1){
            n=n-k;
            if(n%x==0){
                cout<<(n/x)+1<<endl;
            }
            else{
                cout<<(n/x)+2<<endl;
            }
        }
        else{
            if(n%x==0){
                cout<<n/x<<endl;
            }
            else{
                cout<<(n/x)+1<<endl;
            }
        }
        
    }

    return 0;
}