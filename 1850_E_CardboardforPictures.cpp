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
        long long c;
        cin >> n >> c;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long l = 0, r = sqrt(c);
        long long mid;
        while (l <= r)
        {
            long long sum = 0;
            mid = (l + r) / 2;
            for (int i = 0; i < n; i++)
            {
                long long temp = (v[i] + 2 * mid);
                sum += temp * temp;
                if (sum > c)
                    break;
            }
            if (sum > c)
            {
                r = mid - 1;
            }
            else if (sum < c)
            {
                l = mid + 1;
            }
            else
            {
                break;
            }
        }
        cout << mid << endl;
    }

    return 0;
}