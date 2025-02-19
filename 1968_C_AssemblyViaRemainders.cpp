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
        vector <int> a(n-1),b(n);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        
        b[0]=a[0]+1;
        for(int i=1;i<n;i++){
            int j=1,x=0;
            while(1){
                x=a[i-1]+(j*b[i-1]);
                if((i<n-1) && (2*x<=x+a[i])){
                    j++;
                }
                else{
                    break;
                }
            }
            b[i]=x;
        }

        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }

        cout<<endl;

    }
    return 0;
}