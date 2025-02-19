#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        long long int one=0;
        long long int res=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                if(one>0){
                    res=res+(one+1);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}