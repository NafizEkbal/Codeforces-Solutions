#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        for(int i=1;i<n;i++){
            cout<<p[i]<<" ";
        }
        cout<<p[0];
        cout<<endl;
    }
    return 0;
}