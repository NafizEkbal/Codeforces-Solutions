#include <bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        bool square=true;
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(l+r!=d+u){
            square=false;
        }
        double dist1=distance(-l,0,0,-d);
        double dist2=distance(0,-d,r,0);
        double dist3=distance(r,0,0,u);
        double dist4=distance(0,u,-l,0);

        double dist5=distance(-l,0,r,0);
        double dist6=distance(0,-d,0,u);

        if(dist1!=dist2 || dist2!=dist3 || dist3!=dist4 || dist4!=dist1){
            square=false;
        }
        if(dist5!=dist6){
            square=false;
        }
       
        if(square){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}