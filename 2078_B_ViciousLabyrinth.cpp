#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin>>n>>k;
        vector<int>a(n);

        if(k%2==1){
            for(int i=1;i<n;i++){
                cout<<n<<" ";
            }
            cout<<n-1<<endl;
        }
        else{
            for(int i=1;i<n-1;i++){
                cout<<n-1<<" ";
            }

            cout<<n<<" "<<n-1<<endl;
        }
    }

    return 0;
}