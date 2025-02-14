#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,t,u;
        char x;
        cin>>s>>t>>u;
        if((int)s[0]+(int)s[1]+(int)s[2]!=198){
            x=198-((int)s[0]+(int)s[1]+(int)s[2])+63;
        }
        else if((int)t[0]+(int)t[1]+(int)t[2]!=198){
            x=198-((int)t[0]+(int)t[1]+(int)t[2])+63;
        }
        else{
            x=198-((int)u[0]+(int)u[1]+(int)u[2])+63;
        }
        cout<<x<<endl;
    }
    

}
