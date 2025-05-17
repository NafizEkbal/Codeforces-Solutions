#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t=1;
    //cin >> t;
    while (t--) {
        long long n,d;
        cin>>n>>d;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<long long>());
        int temp=n,ans=0;
        for(int i=0;i<n;i++){
            int j=1;
            while(temp){
                if(v[i]*j>d){
                    ans++;
                    temp--;
                    break;
                }else{
                    j++;
                    temp--;
                }
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}