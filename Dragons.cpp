#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>vect;
    int x[n],y[n];
     for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    } 
    for(int i=0;i<n;i++){
        vect.push_back(make_pair(x[i],y[i]));
    }
    sort(vect.begin(),vect.end());

    for(int i=0;i<n;i++){
        if(s>vect[i].first){
            s=s+vect[i].second;
        }
        else{
            s=0;
        }
    }
    if(s){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}