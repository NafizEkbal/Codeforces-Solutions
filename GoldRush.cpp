#include <bits/stdc++.h>
using namespace std;

bool check(int n,int m){
    if(n==m){
        return true;
    }
    if(n%3 !=0 || n<m){
        return false;
    }
    n=n/3;
    return check(n,m) || check(n*2,m);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<"YES"<<endl;
        }
        else if(n<m){
            cout<<"NO"<<endl;
        }
        else{
            if(check(n,m)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}