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
        vector<long long>v(n);
        int no_of_0s=0;
        int no_of_1s=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                no_of_0s++;
            }else if(v[i]==1){
                no_of_1s++;
            }
        }
        long long subsequences=pow(2,no_of_0s)*no_of_1s;

        cout<<subsequences<<endl;
    }

    return 0;
}