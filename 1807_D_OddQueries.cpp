#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        cin>>n>>q;
        long long a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i]=a[i-1]+a[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            long long subSum=a[r]-a[l-1];
            long long addSum=(r-l+1)*k;

            long long res=a[n]-subSum+addSum;

            if(res%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }
    }

    return 0;
}