#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<5){
            cout<<-1;
        }
        else{
            for(int i=1;i<=n;i=i+2){
                if(i!=5){
                    cout<<i<<" ";
                }
            }

            cout<<5<<" "<<4<<" ";

            for(int i=2;i<=n;i=i+2){
                if(i!=4){
                    cout<<i<<" ";
                }
            }
            
        }

        cout<<endl;

    }
    return 0;
}