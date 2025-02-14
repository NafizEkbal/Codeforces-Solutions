#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        bool check=false;
        if(!check){
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    cout<<s[i]<<s[i+1]<<endl;
                    check=true;
                    break;
                }
            }
        }
        if(!check){
            unordered_set<char>us;
            for(int i=0;i<n-2;i++){
                us.insert(s[i]);
                us.insert(s[i+1]);
                us.insert(s[i+2]);
                if(us.size()==3){
                    cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                    check=true;
                    break;
                }
            }
        }
        if(!check){
            cout<<-1<<endl;
        }
    }
    return 0;
}