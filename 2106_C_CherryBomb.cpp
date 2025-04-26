#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        int a[n],b[n];
        int max=INT_MIN,min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        bool m_law=true;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]!=-1){
                m_law=false;
            }
        }
        if(m_law){
            cout<<k+min-max+1<<endl;
            continue;
        }
        bool ck=true;
        int res=1;
        int sm;
        for(int i=0;i<n;i++){
            if(b[i]!=-1){
                if(ck){
                    sm=b[i]+a[i];
                    ck=false;
                }else{
                    if(b[i]+a[i]!=sm){
                        res=0;
                        break;
                    }
                }
            }
        }
        if(sm<max || sm>k+min){
            res=0;
        }
        
        cout<<res<<endl;
        
    }

    return 0;
}