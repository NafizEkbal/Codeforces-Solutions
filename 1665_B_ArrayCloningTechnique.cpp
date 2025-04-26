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
        vector<long long>v(n);
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int max_freq=0;
        for(auto x:mp){
            max_freq=max(max_freq,x.second);
        }
        if(max_freq==n || n==1){
            cout<<0<<endl;
            continue;
        }
        int cnt=max_freq,i=0;
        while(cnt<n){
            cnt*=2;
            i++;
        }
        cout<<n+i-max_freq<<endl;
    }

    return 0;
}