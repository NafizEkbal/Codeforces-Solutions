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
        int high=1,low=n;
        vector<int>ans;
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='<'){
                ans.push_back(high++);
            }else{
                ans.push_back(low--);
            }
        }
        ans.push_back(low);
        reverse(ans.begin(),ans.end());

        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}