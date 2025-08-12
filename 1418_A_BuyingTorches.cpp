#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x,y,k;
        cin>>x>>y>>k;
        long long n=((k*(y+1)-1)+(x-1)-1)/(x-1);
        cout<<k+n<<endl;
    }

    return 0;
}