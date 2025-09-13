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
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<long long> x(n + 1), y(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i] >> y[i];
        }
        long long res = abs(x[a] - x[b]) + abs(y[a] - y[b]);
        long long pre = LLONG_MAX, post = LLONG_MAX;
        if (k > 0)
        {
            for (int i = 1; i <= k; i++)
            {
                pre = min(pre, abs(x[a] - x[i]) + abs(y[a] - y[i]));
                post = min(post, abs(x[b] - x[i]) + abs(y[b] - y[i]));
            }
            res = min(res, pre + post);
        }
        cout << res << endl;
    }

    return 0;
}