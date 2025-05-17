#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,p;
        cin>>n>>p;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<long long,long long>>pr(n);
        for(int i=0;i<n;i++){
            pr[i]=make_pair(b[i],a[i]);
        }
        sort(pr.begin(),pr.end());
        long long res=p;
        long long cnt=1;
        for(int i=0;i<n;i++){
            if(cnt==n){
                break;
            }
            if(pr[i].first>p){
                res+=p*(n-cnt);
                break;
            }else{
                if(pr[i].second<=n-cnt){
                res+=(pr[i].first*pr[i].second);
                cnt=cnt+pr[i].second;
                }else{
                    res+=pr[i].first*(n-cnt);
                    cnt=n;
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}