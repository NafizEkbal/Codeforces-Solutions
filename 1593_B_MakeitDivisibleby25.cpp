#include <bits/stdc++.h>
using namespace std;

int check(string s,char a,char b){
    int l=s.length();
    bool getA=false;

    for(int i=l-1;i>=0;i--){
        if(!getA && s[i]==a){
            getA=true; 
        }else if(getA && s[i]==b){
            return l-i-2;
        }
    }
    return 1e9;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int steps=1e9;
        
        steps=min(steps,check(s,'5','2'));
        steps=min(steps,check(s,'5','7'));
        steps=min(steps,check(s,'0','0'));
        steps=min(steps,check(s,'0','5'));

        cout<<steps<<endl;

    }

    return 0;
}