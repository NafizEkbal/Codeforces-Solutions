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
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        bool valid=true;
        vector<int>res;
        int count=0;
        for(int i=0;i<n;i++){
            if(mp[v[i]]==0){
                continue;;
            }
            else if(mp[v[i]]<2){
                valid=false;
                break;
            }else{
                res.push_back(count+mp[v[i]]);
                for(int j=1;j<mp[v[i]];j++){
                    res.push_back(count+j);
                }
                count=count+mp[v[i]];
                mp[v[i]]=0;
            }
        }
        if(!valid){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}