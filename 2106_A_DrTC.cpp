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
        int ones=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ones++;
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                res=res+ones+1;
            }else{
                res=res+(ones-1);
            }
        }
        cout<<res<<endl;
    }

    return 0;
}