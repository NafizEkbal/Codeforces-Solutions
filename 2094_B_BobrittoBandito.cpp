#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        if(m==n){
            cout<<l<<" "<<r<<endl;
            continue;
        }
        int l1=max(l,-m);
        int r1=l1+m;

        if(r1>r){
            r1=min(r,m);
            l1=r1-m;
        }

        cout<<l1<<" "<<r1<<endl;
    }

    return 0;
}