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
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        for(int i=0;i<n-1;i++){
            while(v[i+1]%v[i]==0){
                if(v[i]==1){
                    v[i]++;
                    if(i>0 && v[i]%v[i-1]==0){
                        v[i]++;
                    }
                }else{
                    v[i+1]++;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}