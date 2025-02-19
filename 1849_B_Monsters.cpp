#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>>res;
        for(int i=0;i<n;i++){
            int x=a[i]%k;
            if(x==0){
                x=k;
            }
            res.push_back({-x,i});
        }
        sort(res.begin(),res.end());

        for(int i=0;i<n;i++){
            cout<<res[i].second+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}