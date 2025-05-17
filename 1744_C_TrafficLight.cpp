#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        char c;
        int n;
        cin>>n>>c;
        string s;
        cin>>s;
        string double_s=s+s;
        bool take =false;
        int x,res=0,ans=0;
        for(int i=0;i<2*n;i++){
            if(double_s[i]==c && !take){
                x=i;
                take=true;
            }
            if(double_s[i]=='g' && take){
                res=i-x;
                take=false;
            }
            ans=max(ans,res);
        }
        cout<<ans<<endl;
    }

    return 0;
}