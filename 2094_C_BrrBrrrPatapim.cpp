#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(2*n,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int x;
                cin>>x;
                v[i+j-1]=x;
            }
        }
        int totalSum=(2*n*(2*n+1))/2;
        int sum=0;

        for(int i=0;i<2*n;i++){
            sum+=v[i];
        }

        for(int i=0;i<2*n;i++){
            if(v[i]==0){
                v[i]=totalSum-sum;
            }
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}