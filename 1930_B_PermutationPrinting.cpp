#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1,j=n;
        while(1){
            cout<<j<<" "<<i<<" ";
            i++;
            j--;
            if(i==j){
                cout<<i<<" ";
                break;
            }
            else if(i>j){
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}