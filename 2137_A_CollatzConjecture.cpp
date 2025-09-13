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
        int k, x;
        cin >> k >> x;
        long long res = x;
        for (int i = 0; i < k; i++)
        {
            res *= 2;
        }
        cout << res << endl;
    }

    return 0;
}