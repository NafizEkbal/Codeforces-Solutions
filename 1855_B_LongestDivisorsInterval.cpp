#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        int res=0;
        for(int i=1;i<50;i++){
            if(n%i==0){
                continue;
            }
            else{
                res=i-1;
                break;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}