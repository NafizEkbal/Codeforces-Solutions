#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int helper=0;
        bool check1=false, check2=false;
        unordered_map<int,int>m;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]==1){
                a[i]=1;
            }
            else{
                if(!check1){
                    helper=a[i];
                    a[i]=2;
                    check1=true;
                }
                else if(helper==a[i]){
                    a[i]=2;

                }

                else{
                    a[i]=3;
                    check2=true;
                }
            }
        }
        if(check1 && check2){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            cout<<-1;
        }
        
        cout<<endl;
    }
    return 0;
}