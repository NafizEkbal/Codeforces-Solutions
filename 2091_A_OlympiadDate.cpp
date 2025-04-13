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
        int a[n];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=0;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[0]>=3 && mp[1]>=1 && mp[2]>=2 && mp[3]>=1 && mp[5]>=1){
                res=i+1;
                break;
            }
        }
        cout<<res<<endl;

    }

    return 0;
}

