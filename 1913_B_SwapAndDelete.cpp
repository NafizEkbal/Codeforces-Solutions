#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int ones=0, zeros=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ones++;
            }else{
                zeros++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && zeros>0){
                zeros--;
            }else if(s[i]=='0' && ones>0){
                ones--;
            }else{
                break;
            }
        }
            cout<<ones+zeros<<endl;
    }

    return 0;
}