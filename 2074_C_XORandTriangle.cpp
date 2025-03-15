#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin>>x;
        long long res=-1;

        for(long long i=0;i<30;i++){
            int y=(1<<i)-1;
            int z=x^y;

            if(x>y && x+y>z && x+z>y && y+z>x){
               res=y;
               break;
            }
        }
        cout<<res<<endl;
        
    }

    return 0;
}