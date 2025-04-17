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
        stack<char> st;
        st.push('$');
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=st.top() && st.top()=='$'){
                st.push(s[i]);
            }else if(s[i]==st.top()){
                st.push(s[i]);
            }else if(s[i]!=st.top() && st.top()!='$'){
                st.pop();
                cnt++;
            }
        }
        if(cnt%2==1){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }

    return 0;
}