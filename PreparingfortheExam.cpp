#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        map<long,long>mp;
        cin>>n>>m>>k;
        vector<int> a(m),b(k);
        for(int i=0;i<m;i++){
             cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
            mp[b[i]]++;
        }
        if(n==k){
            for(int i=0;i<m;i++){
                cout<<1;
            }   
        }
        else if(n-1>k){
            for(int i=0;i<m;i++){
               cout<<0;
            }   
        }
        else{
            for(int i=0;i<m;i++){
                if(mp[a[i]]==1){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }

        cout<<endl;

    }
    return 0;
}