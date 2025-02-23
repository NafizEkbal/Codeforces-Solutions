#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int q;
        cin>>q;
        string res;
        res=res+'1';
        
        bool done=false;
        int y;
        vector<int>v(q);
        for(int i=0;i<q;i++){
            cin>>v[i];
        }
    
        int x=v[0];
        for(int i=1;i<q;i++){
            if(v[i]>=x && !done){
                res=res+'1';
                x=v[i];
            }
            else if(v[i]<=v[0] && !done){
                res=res+'1';
                y=v[i];
                done=true;
            }
            else if(v[i]<=v[0] && v[i]>=y){
                res=res+'1';
                y=v[i];
            }
            else{
                res=res+'0';
            }
        }
        cout<<res<<endl;
    }

    return 0;
}