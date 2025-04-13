#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,x;
        cin>>n>>x;
        vector<long long>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.rbegin(),a.rend());

        int tm=0,cnt=0;

        for(int i=0;i<n;i++){
            cnt++;
            if(a[i]*cnt>=x){
                tm++;
                cnt=0;
            }
        }
        cout<<tm<<endl;
    }

    return 0;
}