#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int diff=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>diff){
                diff=a[i]-a[i-1];
            }
        }
        if(2*(x-a[n-1])>diff){
            diff=2*(x-a[n-1]);
        }
        cout<<diff<<endl;
    }

    return 0;
}