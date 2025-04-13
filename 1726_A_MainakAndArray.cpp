#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int res=-99999;

        for(int i=0;i<n-1;i++){
            res=max(res,v[i]-v[i+1]);
        }
        
        for(int i=1;i<n;i++){
            res=max(res,v[i]-v[0]);
        }
        for(int i=0;i<n-1;i++){
            res=max(res,v[n-1]-v[i]);
        }
        cout<<res<<endl;
    }

    return 0;
}