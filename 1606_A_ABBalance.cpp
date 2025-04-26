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
        int AB=0,BA=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='a' && s[i+1]=='b'){
                AB++;
            }
            if(s[i]=='b' && s[i+1]=='a'){
                BA++;
            }
        }
        if(AB==BA){
            cout<<s<<endl;
            continue;
        }else{
            if(s[0]=='a'){
                s[0]='b';
            }else{
                s[0]='a';
            }
        }
        cout<<s<<endl;

    }

    return 0;
}