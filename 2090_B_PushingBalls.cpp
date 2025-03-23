#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));
        bool p=true;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                a[i][j]=c-'0';
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1){
                    bool pr=true,pc=true;
                    for(int k=0;k<j;k++){
                        if(a[i][k]==0){
                            pr=false;
                            break;
                        }
                    }
                    for(int l=0;l<i;l++){
                        if(a[l][j]==0){
                            pc=false;
                            break;
                        }
                    }
                    if(!pr && !pc){
                        p=false;
                        break;
                    }
                }
            }
            if(!p){
                break;
            }
        }

        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;;
        }
    }

    return 0;
}