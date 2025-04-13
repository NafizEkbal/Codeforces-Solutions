#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        long long x=0,y=0;
        if(n<4){
            cout<<-1<<endl;
            continue;
        }
        if(n==6){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        if(n%6==0){
            x=n/6;
        }
        else if(n%6==4 || n%6==2){
            x=n/6 +1;
        }
        if(n%4==0 || n%4==2){
            y=n/4;
        }
        if(x==0 || y==0){
            cout<<-1<<endl;
            continue;
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}