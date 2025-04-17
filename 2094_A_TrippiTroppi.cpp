#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n=3;
        string res;
        while(n--){
            string s;
            cin>>s;
            res.push_back(s[0]);
        }
        cout<<res<<endl;
    }

    return 0;
}