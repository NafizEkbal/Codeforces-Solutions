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
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
        int mid=(n+1)/2;
        for(int i=1;i<mid;i++){
            cout<<i<<" "<<mid+i<<" ";
        }
        cout<<mid<<endl;
    }

    return 0;
}