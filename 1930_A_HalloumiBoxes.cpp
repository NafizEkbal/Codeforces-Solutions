#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[n];
        int check=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(check<=a[i]){
                check=a[i];
            }
            else{
                flag=false;
            }
        }
        if(!flag && k==1){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}