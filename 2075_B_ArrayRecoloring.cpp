#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        } 
        
        if(k==1){
            long long mx=a[0]+a[n-1];
            long long mxE=0;
            for(long long i=1;i<n-1;i++){
                mxE=max(mxE,a[i]);
            }
            long long lg=max(a[0],a[n-1]);
            long long res=max(mx,mxE+lg);

            cout<<res<<endl;
            continue;

        }
        sort(a.begin(), a.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < k; i++){
            sum += a[i];
        } 
        long long last = a[k];
        cout << sum + last << endl;
    }
    return 0;
}