#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k,p;
        int res;
        cin>>n>>k>>p;
        k=abs(k);

        if(k==0){
            cout<<0<<endl;
            continue;
        }
        else if(n*p<k){
            cout<<-1<<endl;
            continue;
        }
        else{
            if(k%p){
                res=(k/p)+1;
            }
            else{
                res=(k/p);
            }
           cout<<res<<endl;
        }
    }

    return 0;
}