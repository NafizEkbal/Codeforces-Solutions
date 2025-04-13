#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s,t,res="";
        cin>>s;
        cin>>t;
        unordered_map<char,int>mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        for(int i=s.length()-1;i>=0;i--){
            if(mp[s[i]]>0){
                res+=s[i];
                mp[s[i]]--;
            }
        }
        reverse(res.begin(),res.end());

        if(res==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}