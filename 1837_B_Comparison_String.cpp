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
        string s;
        cin>>s;
        char com=s[0];
        int cnt=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(com==s[i]){
                cnt++;
            }else{
                res=max(res,cnt);
                com=s[i];
                cnt=1;
            }
        }
        res=max(res,cnt);
        cout<<res+1<<endl;
    }

    return 0;
}