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
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        long long min= (sum+x-1)/x;

        sum=0;
        for(int i=0;i<n;i++){
            sum+=(v[i]+x-1)/x;
        }
        long long max=sum;

        cout<<min<<" "<<max<<endl;

    }

    return 0;
}