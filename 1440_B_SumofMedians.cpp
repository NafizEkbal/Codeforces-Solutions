#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<long long>v(n*k);
        for(int i=0;i<n*k;i++){
            cin>>v[i];
        }
        int d=n/2;
        reverse(v.begin(),v.end());
        long long sum=0;
        int count=0;
        for(int i=d;i<n*k;i=i+d+1){
            sum+=v[i];
            count++;
            if(count==k){
                break;
            }
        }

        cout<<sum<<endl;

    }

    return 0;
}