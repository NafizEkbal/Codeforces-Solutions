#include <bits/stdc++.h>
using namespace std;
int value(string s){
    unordered_set<char>us;
    for(auto i:s){
        us.insert(i);
    }

    return us.size();

}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        vector<int>pre(n),suf(n);
        unordered_set<char>us;

        us.clear();
        for(int i=0;i<n;i++){
            us.insert(s[i]);
            pre[i]=us.size();
        }

        us.clear();
        for(int i=n-1;i>=0;i--){
            us.insert(s[i]);
            suf[i]=us.size();
        }


        for(int i=0;i<n-1;i++){
            sum=max(sum,(pre[i]+suf[i+1]));
        }
        cout<<sum<<endl;
    }
    return 0;
}