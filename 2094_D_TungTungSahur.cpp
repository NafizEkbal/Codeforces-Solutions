#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string p,s;
        cin>>p>>s;
        if(p==s){
            cout<<"YES"<<endl;
            continue;
        }
        bool ck=true;
        reverse(p.begin(),p.end());
        reverse(s.begin(),s.end());

        while(s.length()>0 && p.length()>0){
            if(p.back()=='L'){
                int cntP=0;
                while(p.back()=='L'){
                    p.pop_back();
                    cntP++;
                }
                int cntS=0;
                while(s.back()=='L'){
                    s.pop_back();
                    cntS++;
                }
                if(cntS>2*cntP || cntS<1 || cntS<cntP){
                    ck=false;
                    break;
                }
            }
            else{
                int cntP=0;
                while(p.back()=='R'){
                    p.pop_back();
                    cntP++;
                }
                int cntS=0;
                while(s.back()=='R'){
                    s.pop_back();
                    cntS++;
                }
                if(cntS>2*cntP || cntS<1 || cntS<cntP){
                    ck=false;
                    break;
                }
            }
        }
        
        if(ck && s.length()==0 && p.length()==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}