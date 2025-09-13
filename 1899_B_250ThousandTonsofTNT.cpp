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
        vector<long long> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<long long> preA(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            preA[i] = preA[i - 1] + v[i];
        }
        int k = 1;
        long long res = 0;
        while (k <= n)
        {
            if (n % k)
            {
                k++;
                continue;
            }
            long long maxi = LLONG_MIN;
            long long mini = LLONG_MAX;
            for (int i = k; i <= n; i = i + k)
            {
                maxi = max(maxi, preA[i] - preA[i - k]);
                mini = min(mini, preA[i] - preA[i - k]);
            }
            res = max(res, maxi - mini);
            k++;
        }
        cout << res << endl;
    }

    return 0;
}