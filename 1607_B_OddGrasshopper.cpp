#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x,n;
        cin>>x>>n;
        long long add=0;
        if(x%2){
            if(n%4==0){
               add=0; 
            }else if(n%4==1){
                add=n;
            }else if(n%4==2){
                add=-1;
            }else if(n%4==3){
                add=-(n+1);
            }
        }else{
            if(n%4==0){
                add=0; 
             }else if(n%4==1){
                 add=-n;
             }else if(n%4==2){
                 add=1;
             }else if(n%4==3){
                 add=(n+1);
             }
        }
        cout<<x+add<<endl;
    }

    return 0;
}