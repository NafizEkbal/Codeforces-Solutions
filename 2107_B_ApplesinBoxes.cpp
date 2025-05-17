#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        long long mx=INT_MIN,mn=INT_MAX,sum=0;;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        
        if(max(v[n-1]-1,v[n-2])-v[0]>k){
            cout<<"Jerry"<<endl;
        }else if(sum%2==0){
            cout<<"Jerry"<<endl;
        }else{
            cout<<"Tom"<<endl;
        }

    }

    return 0;
}