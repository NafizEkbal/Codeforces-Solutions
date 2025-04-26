#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;

        if(n==x){
            for(int i=0;i<n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(i==x){
                continue;
            }else{
                cout<<i<<" ";
            }
        }
        cout<<x<<endl;

    }

    return 0;
}