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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (k == 2)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    cnt++;
                }
            }
            if (cnt > 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (k == 3 || k == 5)
        {
            int res = 11;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % k == 0)
                {
                    res = 0;
                    break;
                }
                else
                {
                    res = min(res, k - v[i] % k);
                }
            }
            cout << res << endl;
        }
        else if (k == 4)
        {
            int cnt = 0;
            int res = 11;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 4 == 0)
                {
                    cnt = cnt + 2;
                }
                else if (v[i] % 2 == 0)
                {
                    cnt++;
                }
                else
                {
                    res = min(res, k - v[i] % k);
                }
            }
            if (cnt > 1)
            {
                cout << 0 << endl;
            }
            else if (cnt == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << min(2, res) << endl;
            }
        }
    }

    return 0;
}