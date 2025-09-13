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
        vector<pair<int, int>> p(n);
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            p[i] = {x, i};
        }
        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());
        int temp[n];
        int f = 1;
        for (int i = 0; i < n; i++)
        {
            temp[i] = f;
            if (f > 0)
            {
                f *= -1;
            }
            else
            {
                f *= -1;
                f++;
            }
        }
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[(p[i].second)] = temp[i];
        }

        long long T = 0;
        for (int i = 0; i < n; i++)
        {
            T += 2LL * p[i].first * abs(temp[i]);
        }
        cout << T << endl;

        cout << 0 << " ";
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
