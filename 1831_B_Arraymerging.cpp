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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>res_a(2*n+1,0),res_b(2*n+1,0);
        int len=1;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                len++;
            }else{
                if(len>res_a[a[i]]){
                    res_a[a[i]]=len;
                }
                len=1;
            }  
        }
        if(len>res_a[a[n-1]]){
            res_a[a[n-1]]=len;
        }

        len=1;
        for(int i=0;i<n-1;i++){
         if(b[i]==b[i+1]){
             len++;
         }else{
             if(len>res_b[b[i]]){
                 res_b[b[i]]=len;
             }
             len=1;
         }  
     }
     if(len>res_b[b[n-1]]){
         res_b[b[n-1]]=len;
     }

     int res=1;
     for(int i=0;i<2*n+1;i++){
        res=max(res,res_a[i]+res_b[i]);
     }
     cout<<res<<endl;


    }

    return 0;
}
