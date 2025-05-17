#include <bits/stdc++.h>
using namespace std;

int gcd(vector<int>&v){
    int res = v[0];
    for(int i=1;i<v.size();i++){
        res = __gcd(res,v[i]);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>res(n);
        int x=2;
        bool get = false;
        while(x<=10000 && !get){
            vector<int>B,C;
            vector<int>trac(n);

            for(int i=0;i<n;i++){
                if(v[i]%x==0){
                    B.push_back(v[i]);
                    trac[i]=1;
                }else{
                    C.push_back(v[i]);
                    trac[i]=2;
                }
            }
            if(!B.empty() && !C.empty()){
                if(gcd(B)!= gcd(C)){
                    get = true;
                    res=trac;
                    break;
                }
            }
            x++;
        }
        if(get){
            cout<<"Yes"<<endl;
            for(int i=0;i<n;i++){
                cout<<res[i]<<" ";
            }
        }else{
            cout<<"No";
        }
        cout<<endl;

    }

    return 0;
}