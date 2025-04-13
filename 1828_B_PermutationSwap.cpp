#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int res=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            res= gcd(res,abs(i-x));
        }

        cout<<res<<endl;
    }

    return 0;
}