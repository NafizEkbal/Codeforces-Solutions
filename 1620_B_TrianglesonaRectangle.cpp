#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int w,h;
        cin>>w>>h;
        int k;
        cin>>k;
        vector<int>bottom(k);
        for(int i=0;i<k;i++){
            cin>>bottom[i];
        }
        long long diff_X=bottom[k-1]-bottom[0];
        cin>>k;
        vector<int>top(k);
        for(int i=0;i<k;i++){
            cin>>top[i];
        }
        if(top[k-1]-top[0]>diff_X){
            diff_X=top[k-1]-top[0];
        }
        cin>>k;
        vector<int>left(k);
        for(int i=0;i<k;i++){
            cin>>left[i];
        }
        long long diff_Y=left[k-1]-left[0];
        cin>>k;
        vector<int>right(k);
        for(int i=0;i<k;i++){
            cin>>right[i];
        }
        if(right[k-1]-right[0]>diff_Y){
            diff_Y=right[k-1]-right[0];
        }
        long long res;
        res=max(diff_X*h,diff_Y*w);
        cout<<res<<endl;
    }

    return 0;
}