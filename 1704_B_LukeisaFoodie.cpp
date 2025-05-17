#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long min=v[0],max=v[0];
        int res=0;
        for(int i=1;i<n;i++){
            if(abs(min-v[i])>2*x || abs(max-v[i])>2*x){
                res++;
                min=v[i];
                max=v[i];
            }else{
                if(v[i]>max){
                    max=v[i];
                }
                if(v[i]<min){
                    min=v[i];
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}