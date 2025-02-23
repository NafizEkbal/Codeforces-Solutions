#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k,x=0,count=0;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                if(m[(char)tolower(s[i])]>0){
                    m[(char)tolower(s[i])]--;
                    count++;
                }
                else{
                    m[s[i]]++;
                }
            }
            else{
                if(m[(char)toupper(s[i])]>0){
                    m[(char)toupper(s[i])]--;
                    count++;
                }
                else{
                    m[s[i]]++;
                }
            }
        }
        for(int i=0;i<n && k>0;i++){
            if(m[s[i]]>1){
                x=m[s[i]]/2;
                if(x<=k){
                    k=k-x;
                    m[s[i]]=m[s[i]]-2*x;
                    count=count+x;
                }
                else{
                    count=count+k;
                    k=0;
                }
            }
        }
        
        cout<<count<<endl;
    }

    return 0;
}