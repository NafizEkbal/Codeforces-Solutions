#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        bool gotZero = false;
        int cnt=0;
        int sum =0;
        int minVal = 101;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==0){
                    gotZero = true;
                }
                if(a[i][j] <0){
                    cnt++;
                }
                sum+=abs(a[i][j]);
                minVal=min(minVal,abs(a[i][j]));
            }
        }
        if(gotZero){
            cout<<sum<<endl;
        }else{
            if(cnt%2){
                cout<<sum-2*minVal<<endl;
            }else{
                cout<<sum<<endl;
            }
        }
        
    }
    return 0;
}