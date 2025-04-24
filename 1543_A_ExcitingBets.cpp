#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long ex=abs(a-b);

        long long moves=min(a%ex,ex-a%ex);

        cout<<ex<<" "<<moves<<endl;
    }

    return 0;
}