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
        int x;
        bool get=false;
        for(int i=0;i<=20;i++){
            if(n-1<pow(2,i)){
                x=pow(2,i-1);
                break;
            }else if(n-1==pow(2,i)){
                x=pow(2,i);
            }
        }
        int dec=n-1;
        for(int i=0;i<n;i++){
            if(get){
                cout<<0<<" ";
                get=false;
            }
            else if(dec==x){
                cout<<x<<" ";
                get=true;
                dec--;
            }else{
                cout<<dec<<" ";
                dec--;
            }
        }
        cout<<endl;
    }

    return 0;
}