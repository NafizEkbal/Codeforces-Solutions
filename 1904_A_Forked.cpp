#include <bits/stdc++.h>
using namespace std;

long long check(long long Mx,long long My,long long a,long long b,long long Tx,long long Ty){
    
    long long sum=0;

        if(Mx+a==Tx){
            if(My+b==Ty || My-b==Ty){
               sum++;
            }
        }
        else if(Mx-a==Tx){
            if(My+b==Ty || My-b==Ty){
                sum++;
            }
        }

        if(Mx+b==Tx && a!=b){
            if(My+a==Ty || My-a==Ty){
               sum++;
            }
        }
        else if(Mx-b==Tx && a!=b){
            if(My+a==Ty || My-a==Ty){
                sum++;
            }
        }
    
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        long long Sx,Sy;
        cin>>Sx>>Sy;
        long long Tx,Ty;
        cin>>Tx>>Ty;

        vector<pair<long long,long long>>points{
            {Sx+a,Sy+b},
            {Sx+a,Sy-b},
            {Sx-a,Sy-b},
            {Sx-a,Sy+b},
            {Sx+b,Sy+a},
            {Sx+b,Sy-a},
            {Sx-b,Sy-a},
            {Sx-b,Sy+a}
        };
        
        set<pair<long long,long long>>unique_points;
        for(auto point:points){
            unique_points.insert(point);
        }

        long long sum=0;
        for(auto point:unique_points){
            sum+=check(point.first,point.second,a,b,Tx,Ty);
        }
        
        cout<<sum<<endl;
    }

    return 0;
}