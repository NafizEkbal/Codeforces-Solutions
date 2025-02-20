#include <bits/stdc++.h>
using namespace std;

long long max(vector<long long>&v){
    if(v.empty()){
        return 0;
    }
    
    long long mx=0;
    int j;
    for(int i=0;i<v.size();i++){
        if(mx<v[i]){
            mx=v[i];
            j=i;
        }
    }
    v[j]=0;
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        vector<long long>v;

        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x==0){
                sum=sum+max(v);
            }
            else{
                v.push_back(x);
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}