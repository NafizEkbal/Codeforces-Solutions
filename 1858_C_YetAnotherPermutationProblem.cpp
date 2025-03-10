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
        unordered_map<int,int>m;

        for(int i=1;i<=n;i++){
            int j=i;
            while(m[i]==0 && i<=n){
                cout<<i<<" ";
                m[i]++;
                i=i*2;
            }
            i=j+1;
        }
        cout<<endl;
    }

    return 0;
}