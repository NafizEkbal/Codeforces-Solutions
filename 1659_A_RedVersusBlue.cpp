#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,r,b;
        cin>>n>>r>>b;
        int temp;
        if(r%(b+1)==1){
            temp=r/(b+1);
        }else if(r%(b+1)){
            temp=(r/(b+1))+1;
        }else{
            temp=r/(b+1);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(b>=r && (r>0 && b>0)){
                cout<<"B"<<"R";
                b--;
                r--;
                i++;
            }else if((cnt==temp || r==0) && b>0){
                cout<<"B";
                cnt=0;
                b--;
            }else if((cnt!=temp || b==0) && r>0){
                cout<<"R";
                cnt++;
                r--;
            }
        }
        cout<<endl;
    }

    return 0;
}