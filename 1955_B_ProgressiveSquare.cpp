#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int>a(n*n);
        for(int i=0;i<n*n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        vector<int>m;
        for(int i=0;i<n;i++){
            int x=a[0]+(d*i);
            m.push_back(x);
        }

        vector<int>b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                b.push_back(m[i]+(c*j));
            }
        }

        sort(b.begin(),b.end());

        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}