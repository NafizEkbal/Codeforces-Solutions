#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<long long, int>> v(n + 1);
        v[0] = {0, 0};
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            v[i] = {x, i};
        }
        sort(v.begin() + 1, v.end());
        vector<long long> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i].first;
        }
        vector<int> res(n + 1);

        int cnt = n - 1;
        res[v[n].second] = cnt;
        for (int i = n - 1; i >= 1; i--)
        {
            if (pre[i] >= v[i + 1].first)
            {
                cnt = cnt;
            }
            else
            {
                cnt = i - 1;
            }
            res[v[i].second] = cnt;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}