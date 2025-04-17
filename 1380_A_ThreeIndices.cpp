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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool done=false;
        for(int j=1;j<n-1;j++){
            int i=-1,k=-1;
            for(int x=0;x<j;x++){
                if(v[x]<v[j]){
                    i=x;
                    break;
                }
            }
            for(int x=j+1;x<n;x++){
                if(v[x]<v[j]){
                    k=x;
                    break;
                }
            }

            if(i!=-1 && k!=-1){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                done=true;
                break;
            }
        }
        if(!done){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}