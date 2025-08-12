#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b,x,y;
        cin>>a>>b>>x>>y;

        if(a==b){
            cout<<0<<endl;
        }else if(a>b){
            if(a%2 ==0 || a-b>1){
                cout<<-1<<endl;
            }else{
                cout<<y<<endl;
            }
        }else{
            if(x<=y){
                cout<<(b-a)*x<<endl;
            }else{
                if((b-a)%2 ==0){
                    cout<<((b-a)/2)*x + ((b-a)/2)*y << endl;
                }else{
                    if(a%2==0){
                       cout<<((b-a)/2)*x + (((b-a)/2)+1)*y << endl;
                    }else{
                       cout<<(((b-a)/2)+1)*x + ((b-a)/2)*y << endl;
                    }
                }
            }
        }

    }

    return 0;
}