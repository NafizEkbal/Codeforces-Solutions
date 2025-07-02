#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                cnt++;
            }
            v[i]=cnt;
        }
        int w_cnt,min_w=INT_MAX;
        for(int i=k-1;i<v.size();i++){
            if(i>=k){
                w_cnt= v[i]-v[i-k];
            }else{
                w_cnt=v[i];
            }
            min_w=min(min_w,w_cnt);
        }
        cout<<min_w<<endl;
    }
    return 0;
}