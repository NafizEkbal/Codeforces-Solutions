#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long n,dec=0;
        bool res=true;
        cin>>n;
        vector<long>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            long x;
            cin>>x;
            vec[i]=vec[i]-x;
            if(vec[i]<0){
                if(dec==0){
                    dec=vec[i];
                }
                else{
                    res=false;
                }
            }
            
        }
        for(int i=0;res && i<n;i++){
            if(vec[i]<0){
                continue;
            }
            if(vec[i]+dec<0){
                res=false;
            }
        }
        if(res){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}