#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        bool check=true;
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
           if(a[i]!=b[i]){
            check=false;
            break;
           }
        }
        if(!check){
            check=true;
            for(int i=0;i<n;i++){
                if(a[i]!=b[(n-1)-i]){
                 check=false;
                 break;
                }
             }
        }

        if(check){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
        
    }
    return 0;
}