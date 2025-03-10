#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<vector<int>>v(n);
        vector<int>helper;
        vector<int>result;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            v[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++){
            int first_min=INT_MAX,sec_min=INT_MAX;
            int count_first_min=0;

            for(int j=0;j<v[i].size();j++){
                if(first_min>v[i][j]){
                    first_min=v[i][j];
                    count_first_min=1;
                }
                else if(v[i][j]==first_min){
                    count_first_min++;
                }
            }
            if(count_first_min>1){
                sec_min=first_min;
            }
            else{
                for(int j=0;j<v[i].size();j++){
                    if(first_min!=v[i][j] && sec_min>v[i][j]){
                        sec_min=v[i][j];
                    }
                }
    
            }
    
            helper.push_back(first_min);
            result.push_back(sec_min);
        }

        sort(helper.begin(),helper.end());
        sort(result.begin(),result.end());

        result[0]=helper[0];

        long long sum=0;

        for(int i=0;i<result.size();i++){
            sum=sum+result[i];
        }

        cout<<sum<<endl;

    }

    return 0;
}