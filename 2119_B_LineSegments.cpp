#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int px,py,qx,qy;
        cin>>px>>py>>qx>>qy;
        long long sum=0,maxVal=0;;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            maxVal=max(maxVal,x);
        }
        long long dx = qx - px;
        long long dy = qy - py;
        long long d = dx * dx + dy * dy;
        long long minLen= max(0LL, 2*maxVal -sum);

        if(d >= minLen*minLen && d<= sum*sum){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}