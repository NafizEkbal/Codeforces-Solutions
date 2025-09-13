#include <bits/stdc++.h>
using namespace std;

int check(long long mid, long long x, vector<long long> v)
{
    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= mid)
        {
            sum += (mid - v[i]);
        }
    }
    if (sum <= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long v_max = *max_element(v.begin(), v.end());
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        long long s = 1, e = x + v_max;
        long long mid;
        while (s <= e)
        {
            mid = (s + e) / 2;
            if (check(mid, x, v))
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << e << endl;
    }
    return 0;
}