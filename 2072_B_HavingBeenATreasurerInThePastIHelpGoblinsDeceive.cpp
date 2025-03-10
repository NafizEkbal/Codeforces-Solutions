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
        long long d=0,u=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-'){
                d++;
            }
            else{
                u++;
            }
        }
        long long res=(d/2)*(d-(d/2))*u;
        cout<<res<<endl;
    }

    return 0;
}