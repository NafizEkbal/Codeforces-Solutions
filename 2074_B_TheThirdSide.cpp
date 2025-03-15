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
        int x=v[0];
        for(int i=0;i<v.size()-1;i=i+2){
            x=v[i]+v[i+1]-1;
            v.push_back(x);
        }
        cout<<x<<endl;
    }

    return 0;
}