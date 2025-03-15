#include<bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin>>t;
    while(t--){
        
        int n,H,M,Min=INT_MAX;
        cin>>n>>H>>M;
        int h[n],m[n];
        for(int i=0;i<n;i++){
            cin>>h[i]>>m[i];
        }
        int time=H*60+M;
        for(int i=0;i<n;i++){
            
            int p=h[i]*60+m[i];
            
            if(time>p){
                p=p+1440;
            }
            Min=min(Min,p-time);
        }

        cout<<Min/60<<" "<<Min%60<<endl;

    }
    return 0;
}