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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<1<<" "<<2<<endl;
            continue;
        }
        int j=4;
        for(int i=1;i<=n;i++){
            if(i==1){
                cout<<3<<" ";
            }
            else if(i==n){
                cout<<2<<" ";
            }
            else if(n%2==1 && i==(n+1)/2){
                cout<<1<<" ";
            }
            else if(n%2==0 && i==(n)/2){
                cout<<1<<" ";
            }
            else{
                cout<<j<<" ";
                j++;
            }
        }
        cout<<endl;
    }

    return 0;
}