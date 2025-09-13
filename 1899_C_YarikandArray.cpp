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
        vector<int> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 0);
        dp[1] = a[1];
        int ans = dp[1];
        for (int i = 2; i <= n; i++)
        {
            if ((a[i] & 1) != (a[i - 1] & 1))
            {
                dp[i] = max(a[i], dp[i - 1] + a[i]);
            }
            else
            {
                dp[i] = a[i];
            }
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }

    return 0;
}