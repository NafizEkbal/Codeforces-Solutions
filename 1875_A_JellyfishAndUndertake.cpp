#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long tm=0;
        for(int i=0;i<n;i++){
           tm+=min(a-1,arr[i]);
        }
        cout<<tm+b<<endl;
    }

    return 0;
}