#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long>res(n,0);
        int i=0;
        long long temp_s=s;
        if(((b+1)*k)-1>s){
            res[i]=temp_s;
        }else{
            res[i]=((b+1)*k)-1;
            temp_s=temp_s-res[i];
            i++;
            while(temp_s>0 && i<n){
                if(temp_s>=k){
                    res[i]=k-1;
                    temp_s=temp_s-res[i];
                    i++;
                }else{
                    res[i]=temp_s;
                    temp_s=temp_s-res[i];
                    i++;
                }
            }
        }
        long long t_sum=0,b_sum=0;
        for(int j=0;j<n;j++){
            t_sum=t_sum+res[j];
            b_sum=b_sum+(res[j]/k);
        }
        if(t_sum==s && b_sum==b){
            for(int j=0;j<n;j++){
            cout<<res[j]<<" ";
            }
        }else{
            cout<<-1;
        }
        cout<<endl;
    }

    return 0;
}