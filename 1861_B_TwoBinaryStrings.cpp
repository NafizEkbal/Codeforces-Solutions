#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       string s,t;
       bool done=false;
       cin>>s>>t;
       if(s==t){
        done=true;
       }

       if(!done){
          for(int i=1;i<s.length()-1;i++){
            if(s[i]==t[i]){
                if(s[i]=='1'){
                    done=true;
                    break;
                }
            }
            else{
                break;
            }
        }
    }
        if(!done){
            for(int i=s.length()-2;i>1;i--){
                if(s[i]==t[i]){
                    if(s[i]=='0'){
                        done=true;
                        break;
                    }
                }
                else{
                    break;
                }
            }
        }
        
        if(!done){
            for(int i=1;i<s.length()-1;i++){
                if((s[i]=='0'&& t[i]=='0')&&(s[i+1]=='1'&&t[i+1]=='1')){
                    done=true;
                    break;
                }
            }
        }
        if(done){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}