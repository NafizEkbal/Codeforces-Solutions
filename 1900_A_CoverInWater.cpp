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
        string s;
        cin>>s;
        int count=0;
        bool done=false;
        for(int i=0;i<s.length();i++){
           if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
            cout<<2<<endl;
            done=true;
            break;
           }
           else if(s[i]=='.'){
            count++;
           }
        }
        if(!done){
            cout<<count<<endl;
        }

    }

    return 0;
}