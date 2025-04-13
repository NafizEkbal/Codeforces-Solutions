#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        bool ck=false,done=false;
        int cnt=0;
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x>0 && !ck && !done){
                ck=true;
                cnt++;
                if(cnt==2){
                    done=true;
                }
            }
            else if(x==0 && ck && i!=n-1 && !done){
                ck=false;
            }
        }
        
        cout<<cnt<<endl;
        
    }

    return 0;
}